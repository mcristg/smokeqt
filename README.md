# SmokeQt6

SMOKE (Scripting Meta Object Kompiler Engine) bindings for Qt 6. This project generates language-independent introspection libraries that expose Qt 6 classes, methods, and enums through a flat C interface, enabling language bindings such as QtRuby, PerlQt, and CommonQt (Lisp) to call into Qt without hand-written wrapper code.

## Supported Qt 6 Modules

| Module | Library | Qt Component |
|---|---|---|
| QtCore | `smokeqt6core` | Core non-GUI classes |
| QtGui | `smokeqt6gui` | GUI primitives (images, fonts, painting) |
| QtWidgets | `smokeqt6widgets` | Desktop widget toolkit |
| QtNetwork | `smokeqt6network` | Networking (TCP, UDP, HTTP, SSL) |
| QtOpenGL | `smokeqt6opengl` | OpenGL integration |
| QtPdf | `smokeqt6pdf` | PDF rendering |
| QtPrintSupport | `smokeqt6printsupport` | Printing support |
| QtQml | `smokeqt6qml` | QML engine |
| QtQuick | `smokeqt6quick` | Qt Quick scene graph |
| QtQuickWidgets | `smokeqt6quickwidgets` | Embedding Quick in Widgets |
| QtSql | `smokeqt6sql` | SQL database access |
| QtSvg | `smokeqt6svg` | SVG rendering |
| QtWebChannel | `smokeqt6webchannel` | Web channel communication |
| QtWebEngine | `smokeqt6webengine` | Chromium-based web engine |
| QtWidgets | `smokeqt6widgets` | Widget toolkit |
| QtXml | `smokeqt6xml` | XML parsing |

Optional/disabled modules: QtDBus, QtHelp, QtMultimedia, QtMultimediaWidgets, QtPositioning, QtScxml, QtSpatialAudio, QtTest, QtUiTools, Qt3DAnimation, Qt3DCore, Qt3DExtras, Qt3DInput, Qt3DLogic, Qt3DRender, QScintilla, Qwt.

## Prerequisites

- **CMake** >= 3.22
- **C++17** compiler (MSVC 2019+, GCC, or Clang)
- **Qt 6** (6.x, tested with 6.11)
- **smokegen** — the SMOKE code generator (must be built first, expected at `../smokegen/`)

## Building

SmokeQt depends on **smokegen**, the code generator. Clone and build it so that its CMake config and binary are available:

```bash
mkdir build && cd build
cmake .. -GNinja -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=\path\to\install -DCMAKE_MSVC_RUNTIME_LIBRARY=MultiThreadedDLL -DSMOKE_QT_VERSION=6 -DQt6_DIR=\path\to\qt6\lib\cmake\Qt6 -DLLVM_DIR=\path\to\llvm\lib\cmake\llvm
ninja -j 6
ninja install
```

On Windows, run the cmake commands from an x64 Native Tools Command Prompt.
The Visual Studio generator can be used instead of Ninja if preferred, but Ninja is recommended for faster incremental builds.

## Installed Artifacts

- **Shared libraries**: `smokeqt6core`, `smokeqt6gui`, `smokeqt6widgets`, etc. → `<prefix>/lib/` (Unix) or `<prefix>/bin/` (Windows DLLs)
- **SMOKE headers**: `qt6core_smoke.h`, `qt6gui_smoke.h`, etc. → `<prefix>/include/smoke/`
- **Metadata files**: `*.argnames.txt`, `*.typedefs.txt` → `<prefix>/share/smoke/`
- **Qt config**: `qt-config.xml` → `<prefix>/share/smokegen/`

## License

GNU General Public License v2 (see [COPYING](COPYING)).
