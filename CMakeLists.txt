# Ensure CMake can find macro files from smokegen
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_SOURCE_DIR}/../smokegen/cmake)
cmake_minimum_required(VERSION 3.18.4)
project(SMOKEQT6 LANGUAGES CXX)

# Include generated macros for run_smokegen and related functions
include(${CMAKE_SOURCE_DIR}/../smokegen/build/cmake/SmokeConfig.cmake)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)

function(get_smokegen_args RESULT_NAME moduleName)
  set(clangOptions "-clangOptions")
  message(STATUS "DEBUG: MSVC=${MSVC}, MSVC_VERSION=${MSVC_VERSION}")
  if(NOT WIN32)
    list(APPEND clangOptions "-fPIC")
    if (SMOKEGEN_OPTION)
      string(REPLACE " " ";" SMOKEGEN_OPTION ${SMOKEGEN_OPTION})
      list(APPEND clangOptions ${SMOKEGEN_OPTION})
    endif()
  endif()
  
  # Check for MSVC compiler (MSVC_VERSION is set when using MSVC)
  if(MSVC_VERSION GREATER 1600)
    # The features that clang reports and the features that Qt will detect at
    # compile time must match.  MSVC2015 supports c++14, but does not support
    # only the c++11 subset that clang would turn on with -std=c++11.  When
    # running inside smokegen, Qt's compiler detection sees the compiler as
    # clang under msvc.
    list(APPEND clangOptions "-std=c++17")
    
    # Qt6 removed Q_DECL_HIDDEN_STATIC_METACALL - define it as empty for clang parsing
    list(APPEND clangOptions "-DQ_DECL_HIDDEN_STATIC_METACALL=")
    
    # On MSVC, smokegen uses clang tooling API which doesn't automatically find
    # MSVC system include directories. We need to pass them explicitly.
    # Add MSVC compatibility flags
    list(APPEND clangOptions "-fms-extensions")
    list(APPEND clangOptions "-fms-compatibility")
    list(APPEND clangOptions "-fdelayed-template-parsing")
    
  elseif(${Qt6Core_VERSION} VERSION_GREATER 6.2.4)
    # Qt >=5.7.0 requires c++11
    list(APPEND clangOptions "-std=c++17")
  endif()

  message(STATUS "smokegen clangOptions: ${clangOptions}")
  set(smokegenArgs
    -config "${CMAKE_CURRENT_BINARY_DIR}/config.xml"
    -smokeconfig "${CMAKE_CURRENT_SOURCE_DIR}/smokeconfig.xml"
    -L "${CMAKE_BINARY_DIR}"
    ${clangOptions}
    -- ${CMAKE_CURRENT_SOURCE_DIR}/${moduleName}_includes.h
  )
  set(${RESULT_NAME} ${smokegenArgs} PARENT_SCOPE)
endfunction()

function(create_configure_files dirs)
  set(qt_dirs)
  foreach(filename ${dirs})
    if(NOT "${filename}" MATCHES "TARGET_PROPERTY:Qt6")
      if("${filename}" MATCHES "\\.framework/?$")
        string(REGEX REPLACE "/[^/]+\\.framework" "" framework_path "${filename}")
        set(qt_dirs "${qt_dirs}        <framework>${framework_path}</framework>\n")
      else()
        set(qt_dirs "${qt_dirs}        <dir>${filename}</dir>\n")
      endif()
    endif()
  endforeach(filename)

  if(EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/config.xml.cmake)
    configure_file(${CMAKE_CURRENT_SOURCE_DIR}/config.xml.cmake ${CMAKE_CURRENT_BINARY_DIR}/config.xml @ONLY)
  endif()
  if(EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/qt-config.xml.cmake)
    configure_file(${CMAKE_CURRENT_SOURCE_DIR}/qt-config.xml.cmake ${CMAKE_CURRENT_BINARY_DIR}/qt-config.xml @ONLY)
  endif()
endfunction()

add_definitions(-DSMOKE_BUILDING)

if(MSVC)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /MP")
endif()

if(NOT Qt6_DIR AND EXISTS "${CMAKE_SOURCE_DIR}/../qt-install/lib/cmake/Qt6/Qt6Config.cmake")
  set(Qt6_DIR "${CMAKE_SOURCE_DIR}/../qt-install/lib/cmake/Qt6" CACHE PATH "Qt6 CMake dir" FORCE)
endif()

if(Qt6_DIR)
    string(REPLACE "/lib/cmake/Qt6" "" Qt_ROOT_DIR ${Qt6_DIR})
    set(Qt6CoreTools_DIR "${Qt_ROOT_DIR}/lib/cmake/Qt6CoreTools")
    set(Qt6Core_DIR "${Qt_ROOT_DIR}/lib/cmake/Qt6Core")
    # set(Qt6DBusTools_DIR "${Qt_ROOT_DIR}/lib/cmake/Qt6DBusTools")
    # set(Qt6DBus_DIR "${Qt_ROOT_DIR}/lib/cmake/Qt6DBus")
    set(Qt6GuiTools_DIR "${Qt_ROOT_DIR}/lib/cmake/Qt6GuiTools")
    set(Qt6Gui_DIR "${Qt_ROOT_DIR}/lib/cmake/Qt6Gui")
    # set(Qt6Help_DIR "${Qt_ROOT_DIR}/lib/cmake/Qt6Help")
    # set(Qt6Multimedia_DIR "${Qt_ROOT_DIR}/lib/cmake/Qt6Multimedia")
    # set(Qt6MultimediaWidgets_DIR "${Qt_ROOT_DIR}/lib/cmake/Qt6MultimediaWidgets")
    set(Qt6Network_DIR "${Qt_ROOT_DIR}/lib/cmake/Qt6Network")
    # set(Qt6OpenGLWidgets_DIR "${Qt_ROOT_DIR}/lib/cmake/Qt6OpenGLWidgets")
    set(Qt6OpenGL_DIR "${Qt_ROOT_DIR}/lib/cmake/Qt6OpenGL")
    # set(Qt6Positioning_DIR "${Qt_ROOT_DIR}/lib/cmake/Qt6Positioning")
    set(Qt6PrintSupport_DIR "${Qt_ROOT_DIR}/lib/cmake/Qt6PrintSupport")
    # set(Qt6QmlIntegration_DIR "${Qt_ROOT_DIR}/lib/cmake/Qt6QmlIntegration")
    # set(Qt6QmlModels_DIR "${Qt_ROOT_DIR}/lib/cmake/Qt6QmlModels")
    set(Qt6QmlTools_DIR "${Qt_ROOT_DIR}/lib/cmake/Qt6QmlTools")
    set(Qt6Qml_DIR "${Qt_ROOT_DIR}/lib/cmake/Qt6Qml")
    set(Qt6QuickWidgets_DIR "${Qt_ROOT_DIR}/lib/cmake/Qt6QuickWidgets")
    set(Qt6Quick_DIR "${Qt_ROOT_DIR}/lib/cmake/Qt6Quick")
    # set(Qt6ScxmlTools_DIR "${Qt_ROOT_DIR}/lib/cmake/Qt6ScxmlTools")
    # set(Qt6Scxml_DIR "${Qt_ROOT_DIR}/lib/cmake/Qt6Scxml")
    # set(Qt6SpatialAudio_DIR "${Qt_ROOT_DIR}/lib/cmake/Qt6SpatialAudio")
    set(Qt6Sql_DIR "${Qt_ROOT_DIR}/lib/cmake/Qt6Sql")
    set(Qt6Svg_DIR "${Qt_ROOT_DIR}/lib/cmake/Qt6Svg")
    # set(Qt6UiPlugin_DIR "${Qt_ROOT_DIR}/lib/cmake/Qt6UiPlugin")
    # set(Qt6UiTools_DIR "${Qt_ROOT_DIR}/lib/cmake/Qt6UiTools")
    set(Qt6WebChannel_DIR "${Qt_ROOT_DIR}/lib/cmake/Qt6WebChannel")
    set(Qt6WebEngineCoreTools_DIR "${Qt_ROOT_DIR}/lib/cmake/Qt6WebEngineCoreTools")
    set(Qt6WebEngineCore_DIR "${Qt_ROOT_DIR}/lib/cmake/Qt6WebEngineCore")
    set(Qt6WebEngineQuick_DIR "${Qt_ROOT_DIR}/lib/cmake/Qt6WebEngineQuick")
    set(Qt6WebEngineWidgets_DIR "${Qt_ROOT_DIR}/lib/cmake/Qt6WebEngineWidgets")
    set(Qt6WidgetsTools_DIR "${Qt_ROOT_DIR}/lib/cmake/Qt6WidgetsTools")
    set(Qt6Widgets_DIR "${Qt_ROOT_DIR}/lib/cmake/Qt6Widgets")
    set(Qt6Xml_DIR "${Qt_ROOT_DIR}/lib/cmake/Qt6Xml")
    # set(Qt6Concurrent_DIR "${Qt_ROOT_DIR}/lib/cmake/Qt6Concurrent")
    set(Qt6Pdf_DIR "${Qt_ROOT_DIR}/lib/cmake/Qt6Pdf")
    #set(Qt63DAnimation_DIR "${Qt_ROOT_DIR}/lib/cmake/Qt63DAnimation")
    #set(Qt63DCore_DIR "${Qt_ROOT_DIR}/lib/cmake/Qt63DCore")
    #set(Qt63DExtras_DIR "${Qt_ROOT_DIR}/lib/cmake/Qt63DExtras")
    #set(Qt63DInput_DIR "${Qt_ROOT_DIR}/lib/cmake/Qt63DInput")
    #set(Qt63DLogic_DIR "${Qt_ROOT_DIR}/lib/cmake/Qt63DLogic")
    #set(Qt63DRender_DIR "${Qt_ROOT_DIR}/lib/cmake/Qt63DRender")
endif()   

# find_package(Vulkan REQUIRED)
# Find Qt6 components available in qt-install
find_package(Qt6
  COMPONENTS
    Core
    Gui
    Network
    OpenGL
    Pdf
    PdfQuick
    PdfWidgets
    PrintSupport
    Qml
    Quick
    QuickWidgets
    Sql
    Svg
    WebChannel
    WebEngineCore
    WebEngineQuick
    WebEngineWidgets
    Widgets
    Xml
  REQUIRED)

# Derive VERSION_MAJOR/MINOR/PATCH from Qt variables if available
if(DEFINED Qt6Core_VERSION)
  string(REPLACE "." ";" VERSION_LIST ${Qt6Core_VERSION})
  list(GET VERSION_LIST 0 VERSION_MAJOR)
  list(GET VERSION_LIST 1 VERSION_MINOR)
  list(GET VERSION_LIST 2 VERSION_PATCH)
elseif(DEFINED Qt6_VERSION)
  string(REPLACE "." ";" VERSION_LIST ${Qt6_VERSION})
  list(GET VERSION_LIST 0 VERSION_MAJOR)
  list(GET VERSION_LIST 1 VERSION_MINOR)
  list(GET VERSION_LIST 2 VERSION_PATCH)
elseif(TARGET Qt6::Core)
  get_target_property(_qt_version Qt6::Core INTERFACE_QT_VERSION)
  if(_qt_version)
    string(REPLACE "." ";" VERSION_LIST ${_qt_version})
    list(GET VERSION_LIST 0 VERSION_MAJOR)
    list(GET VERSION_LIST 1 VERSION_MINOR)
    list(GET VERSION_LIST 2 VERSION_PATCH)
  endif()
endif()



set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${SMOKE_CMAKE_MODULE_DIR}")
include(MacroOptionalFindPackage)
include(MacroOptionalAddBindings)
include(MacroLogFeature)

include_directories(${CMAKE_CURRENT_SOURCE_DIR} ${SMOKE_INCLUDE_DIR})

# add the automatically determined parts of the RPATH
# which point to directories outside the build tree to the install RPATH
set(CMAKE_INSTALL_RPATH_USE_LINK_PATH TRUE)
set(CMAKE_MACOSX_RPATH 1)

# the RPATH to be used when installing, but only if it's not a system directory
LIST(FIND CMAKE_PLATFORM_IMPLICIT_LINK_DIRECTORIES "${CMAKE_INSTALL_PREFIX}/lib" isSystemDir)
IF("${isSystemDir}" STREQUAL "-1")
  SET(CMAKE_INSTALL_RPATH "${CMAKE_INSTALL_PREFIX}/lib")
ENDIF("${isSystemDir}" STREQUAL "-1")

# Set LIB_INSTALL_DIR if it's not set already.
if (NOT LIB_INSTALL_DIR)
  set (LIB_INSTALL_DIR ${CMAKE_INSTALL_PREFIX}/lib${LIB_SUFFIX})
endif (NOT LIB_INSTALL_DIR)

## disable deprecation waringins
if(CMAKE_COMPILER_IS_GNUCXX)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-deprecated-declarations")
endif()

#macro_optional_find_package(Qwt5)
#macro_log_feature(Qwt5_Qt4_FOUND "Qwt5 for Qt4" "Qwt5 libraries for Qt4" "http://qwt.sourceforge.net" FALSE "" "Needed to compile Qwt5 bindings")
#
#macro_optional_find_package(QScintilla)
#macro_log_feature(QSCINTILLA_FOUND "QScintilla2" "QScintilla2 libraries" "http://www.riverbankcomputing.co.uk/software/qscintilla/intro" FALSE "" "Needed to compile QScintilla2 bindings")

set(QTDEFINES_FILE ${CMAKE_CURRENT_BINARY_DIR}/qtdefines)

# Temporarily disabled due to LLVM 19 clang heap corruption crash when parsing Qt6 headers
add_subdirectory(qtcore)
macro_optional_add_bindings(Qt6Gui_FOUND "QtGui" qtgui)
macro_optional_add_bindings(Qt6Network_FOUND "QtNetwork" qtnetwork)
macro_optional_add_bindings(Qt6OpenGL_FOUND "QtOpenGL" qtopengl)
macro_optional_add_bindings(Qt6Pdf_FOUND "QtPdf" qtpdf)
macro_optional_add_bindings(Qt6PrintSupport_FOUND "QtPrintSupport" qtprintsupport)
macro_optional_add_bindings(Qt6Qml_FOUND "QtQml" qtqml)
macro_optional_add_bindings(Qt6Quick_FOUND "QtQuick" qtquick)
macro_optional_add_bindings(Qt6QuickWidgets_FOUND "QtQuickWidgets" qtquickwidgets)
macro_optional_add_bindings(Qt6Sql_FOUND "QtSql" qtsql)
macro_optional_add_bindings(Qt6Svg_FOUND "QtSvg" qtsvg)
macro_optional_add_bindings(Qt6WebChannel_FOUND "QtWebChannel" qtwebchannel)
macro_optional_add_bindings(Qt6WebEngineCore_FOUND "QtWebEngine" qtwebengine)
macro_optional_add_bindings(Qt6Widgets_FOUND "QtWidgets" qtwidgets)
macro_optional_add_bindings(Qt6Xml_FOUND "QtXml" qtxml)




# for qtguess.pl
if (APPLE)
  set(qt_test_threshold 15)
else (APPLE)
  set(qt_test_threshold 10)
endif (APPLE)

# Taken from https://gitlab.kitware.com/cmake/community/-/wikis/FAQ#can-i-do-make-uninstall-with-cmake
# uninstall target
if(NOT TARGET uninstall)
  configure_file(
    "${CMAKE_CURRENT_SOURCE_DIR}/cmake_uninstall.cmake.in"
    "${CMAKE_CURRENT_BINARY_DIR}/cmake_uninstall.cmake"
    IMMEDIATE @ONLY)

  add_custom_target(uninstall
    COMMAND ${CMAKE_COMMAND} -P ${CMAKE_CURRENT_BINARY_DIR}/cmake_uninstall.cmake)
endif()

macro_display_bindings_log()
macro_display_feature_log()
