include(FindQwt)

create_configure_files("${Qt5Core_INCLUDE_DIRS};${Qt5Gui_INCLUDE_DIRS};${Qt5Widgets_INCLUDE_DIRS};${Qt5OpenGL_INCLUDE_DIRS};${QWT_INCLUDE_DIRS};${CMAKE_CURRENT_SOURCE_DIR}")
get_smokegen_args(smokegenArgs qwt)
run_smokegen(10 "${smokegenArgs}")
get_smokegen_output_files(smokeqwt_LIB_SRCS 10)

set(CMAKE_CXX_FLAGS "-I${QWT_ROOT_DIR}/include -I${CMAKE_CURRENT_SOURCE_DIR}")

IF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")
    ADD_DEFINITIONS(-DGCC_VISIBILITY)
ENDIF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")

add_library(smokeqwt SHARED ${smokeqwt_LIB_SRCS})

target_link_libraries(smokeqwt 
    smokeqtcore 
    smokeqtgui 
    smokeqtwidgets 
    Qt5::Core
    Qt5::Gui
    Qt5::Widgets
    Qt5::OpenGL
)

set_target_properties(smokeqwt
    PROPERTIES
    VERSION ${VERSION_MAJOR}.${VERSION_MINOR}.${VERSION_PATCH}
    SOVERSION ${VERSION_MAJOR}
    CXX_STANDARD 14
)

install(TARGETS smokeqwt LIBRARY DESTINATION ${LIB_INSTALL_DIR}
    ARCHIVE DESTINATION ${LIB_INSTALL_DIR}
    RUNTIME DESTINATION bin)

if (WIN32)
    # Realign the stack, for compatibility with an older ABI.
    if (CMAKE_COMPILER_IS_GNUCXX)
	set_target_properties(smokeqwt PROPERTIES COMPILE_FLAGS -mstackrealign)
    endif()

    # Get rid of the "lib" prefix on archives/DLLs in Windows.
    set_target_properties(smokeqwt PROPERTIES PREFIX "" IMPORT_PREFIX "")
endif (WIN32)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/../qwt_smoke.h DESTINATION include/smoke)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/qwt.argnames.txt DESTINATION share/smoke)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/qwt.typedefs.txt DESTINATION share/smoke)

