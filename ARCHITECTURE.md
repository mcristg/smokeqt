# Architecture

## Overview

SmokeQt is a **code-generation project** — it does not contain hand-written Qt bindings. Instead, each Qt module is described by a small set of configuration files, and the external **smokegen** tool parses Qt headers at build time to produce C++ source files that compile into shared libraries. These libraries expose every public Qt class, method, enum, and type through a uniform `Smoke` data structure that language bindings can query at runtime.

```
Qt 6 Headers ──► smokegen (clang-based parser) ──► Generated C++ ──► smokeqt6<module>.so/.dll
                       ▲                                                      │
               config.xml + smokeconfig.xml                                   ▼
                                                                    Language bindings
                                                                 (QtRuby, PerlQt, CommonQt…)
```

## Key Concepts

### The Smoke Data Model

Each SMOKE library exposes a single `Smoke*` pointer (e.g. `qt6core_Smoke`) initialized via `init_qt6core_Smoke()`. The `Smoke` struct (defined in `smokegen`'s `smoke.h`) contains:

- **Classes** — a table of class descriptors (name, parent classes, flags).
- **Methods** — a table of method descriptors (name, class, argument types, return type, flags for virtual/static/const/etc.).
- **Method maps** — a hash table mapping `(class, munged-method-name)` pairs to method indices for fast dispatch.
- **Types** — a table of all types referenced by methods (classes, enums, primitives, pointers/references).
- **Argument lists** — packed arrays of type indices for each method's parameters.
- **Inheritance** — parent class lists enabling virtual dispatch and `dynamic_cast`.

Language bindings call methods through `Smoke::ClassFn` function pointers generated for every class, which perform the actual C++ call and marshal arguments/return values through a `Smoke::StackItem` union.

### Name Munging

SMOKE identifies method overloads with "munged" signatures — compact strings where argument types are reduced to single characters:

| Character | Meaning |
|---|---|
| `$` | Primitive type or enum |
| `#` | Scalar (e.g. `QString`) |
| `?` | `bool` |
| (none) | No arguments |

For example, `QWidget::resize(int, int)` is munged as `$$`.

## Project Structure

### Top-Level CMakeLists.txt

The root build file:

1. Locates **smokegen** via `SmokeConfig.cmake` from `../smokegen/build/cmake/`.
2. Defines two helper functions used by every module:
   - `get_smokegen_args()` — assembles the smokegen command line with clang flags appropriate for the compiler and Qt version.
   - `create_configure_files()` — generates `config.xml` from `config.xml.cmake` by substituting Qt include directories.
3. Finds Qt 6 components with `find_package(Qt6 ...)`.
4. Adds each module subdirectory via `add_subdirectory()` / `macro_optional_add_bindings()`.

### Per-Module Subdirectories

Each Qt module (e.g. `qtcore/`, `qtgui/`, `qtwidgets/`) follows the same pattern with four key files:

#### `<module>_includes.h`

A single header that `#include`s all Qt headers the module should expose. This file is the input to smokegen's clang parser. Example for `qtcore`:

```cpp
#include <QtCore/qcoreapplication.h>
#include <QtCore/qstring.h>
#include <QtCore/qlist.h>
// ...
```

#### `config.xml.cmake`

A CMake template that produces `config.xml` at configure time. It tells smokegen:
- Whether to resolve typedefs (`<resolveTypedefs>`)
- Whether Qt mode is active (`<qtMode>`)
- Which include directories to search

Include directories are injected by `create_configure_files()` from the Qt CMake targets.

#### `smokeconfig.xml`

A static configuration file that tells smokegen:
- The **module name** (e.g. `qt6core`, `qt6gui`)
- **Parent modules** for cross-module inheritance (e.g. `qt6widgets` depends on `qt6core` + `qt6gui`)
- Number of **parts** to split generated code into (for parallel compilation)
- **Scalar** and **voidp** type overrides for name munging
- **Exclusion rules** — regex patterns matching method signatures to skip (deleted functions, private API, incompatible templates, etc.)

#### `CMakeLists.txt`

The module build file. Every module follows the same sequence:

```cmake
# 1. Generate config.xml with Qt include paths
create_configure_files("${Qt6Core_INCLUDE_DIRS};${Qt6<Module>_INCLUDE_DIRS}")

# 2. Assemble smokegen arguments
get_smokegen_args(smokegenArgs qt<module>)

# 3. Run smokegen — generates N .cpp files (smokedata.cpp, x_1.cpp .. x_N.cpp)
run_smokegen(<N> "${smokegenArgs}" <parent smoke targets...>)

# 4. Collect generated source files
get_smokegen_output_files(smoke_LIB_SRCS <N>)

# 5. Build shared library
add_library(smokeqt6<module> SHARED ${smoke_LIB_SRCS})
target_link_libraries(smokeqt6<module> <parent smoke libs> Qt6::<Module>)
```

The `run_smokegen()` macro (from `SmokeConfig.cmake`) runs the smokegen executable as a custom command, producing:
- `smokedata.cpp` — the class/method/type tables
- `x_1.cpp` through `x_N.cpp` — the `ClassFn` dispatch functions, split for parallel compilation

### Smoke Header Files (`qt6<module>_smoke.h`)

Each module has a top-level public header that declares:

```cpp
extern "C" SMOKE_EXPORT Smoke* qt6<module>_Smoke;
extern "C" SMOKE_EXPORT void init_qt6<module>_Smoke();
extern "C" SMOKE_EXPORT void delete_qt6<module>_Smoke();
```

Language bindings include these headers to access the Smoke runtime data.

### Compatibility Headers

- **`offsetof-fix.h`** — Redefines `offsetof` to use `__builtin_offsetof` under Clang, working around constexpr compatibility issues with `QPluginMetaDataV2` in Qt 6.

## Module Dependency Graph

Modules declare parent modules in `smokeconfig.xml`. The dependency tree mirrors Qt's own module structure:

```
qt6core
├── qt6gui
│   ├── qt6widgets
│   │   └── qt6printsupport
│   ├── qt6opengl
│   ├── qt6svg
│   └── qt6pdf
├── qt6network
│   └── qt6webengine (also depends on qt6gui, qt6qml, qt6quick)
├── qt6sql
├── qt6xml
├── qt6qml
│   ├── qt6quick
│   │   └── qt6quickwidgets
│   └── qt6webchannel
└── ...
```

Parent module dependencies are:
- Declared in `smokeconfig.xml` (`<parentModules>`)
- Passed to `run_smokegen()` so smokegen can reference parent class tables
- Linked at the library level via `target_link_libraries()`

## Build Pipeline (per module)

```
┌──────────────────────────────────────────────────────────────────┐
│ CMake Configure                                                  │
│  config.xml.cmake ──► config.xml  (Qt include dirs substituted)  │
└──────────────────┬───────────────────────────────────────────────┘
                   ▼
┌──────────────────────────────────────────────────────────────────┐
│ smokegen (custom command)                                        │
│  Inputs:                                                         │
│    - config.xml          (include paths, flags)                  │
│    - smokeconfig.xml     (module name, exclusions, parents)      │
│    - <module>_includes.h (Qt headers to parse)                   │
│  Outputs:                                                        │
│    - smokedata.cpp       (class/method/type tables)              │
│    - x_1.cpp … x_N.cpp  (ClassFn dispatch implementations)       │
└──────────────────┬───────────────────────────────────────────────┘
                   ▼
┌──────────────────────────────────────────────────────────────────┐
│ C++ Compilation                                                  │
│  smokedata.cpp + x_*.cpp ──► smokeqt6<module>.so / .dll          │
│  Linked against: Qt6::<Module>, parent smoke libraries           │
└──────────────────────────────────────────────────────────────────┘
```

## How Language Bindings Use SMOKE

A language binding (e.g. CommonQt for Lisp):

1. Loads the smoke shared library (`smokeqt6core.dll`).
2. Calls `init_qt6core_Smoke()` to populate the `qt6core_Smoke` data structure.
3. Queries the `Smoke` tables to discover classes, methods, enums, and types.
4. Calls methods through the generated `ClassFn` function pointers, passing arguments via `Smoke::StackItem` arrays.
5. Handles virtual method callbacks through a custom `SmokeBinding` subclass that dispatches back into the host language.

While the binding layer is code-generated, major Qt version upgrades (such as Qt5 to Qt6) often require manual configuration changes: exclusion rules in `smokeconfig.xml` must be updated for deleted/incompatible APIs, `_includes.h` files may need adjustment for new module organization, and CMake configurations may need porting. However, once these are in place, rebuilding automatically picks up most API changes without hand-written wrapper maintenance.
