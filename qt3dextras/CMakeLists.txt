
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

set(Qt53dextras_INCLUDE_DIRS ${Qt_ROOT_DIR}/include/Qt3DExtras)

create_configure_files("${Qt5Core_INCLUDE_DIRS};${Qt5Gui_INCLUDE_DIRS};${Qt53dextras_INCLUDE_DIRS}")
get_smokegen_args(smokegenArgs qt3dextras)
run_smokegen(1 "${smokegenArgs}")
get_smokegen_output_files(smokeqt3dextras_LIB_SRCS 1)

IF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")
    ADD_DEFINITIONS(-DGCC_VISIBILITY)
ENDIF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")

add_library(smokeqt3dextras SHARED ${smokeqt3dextras_LIB_SRCS})

target_link_libraries(smokeqt3dextras
    smokeqtcore 
    smokeqtgui 
    Qt5::Core
    Qt5::Gui
    Qt5::3DExtras
	
)

set_target_properties(smokeqt3dextras
    PROPERTIES
    VERSION ${VERSION_MAJOR}.${VERSION_MINOR}.${VERSION_PATCH}
    SOVERSION ${VERSION_MAJOR}
    CXX_STANDARD 14
)

install(TARGETS smokeqt3dextras LIBRARY DESTINATION ${LIB_INSTALL_DIR}
    ARCHIVE DESTINATION ${LIB_INSTALL_DIR}
    RUNTIME DESTINATION bin)

if (WIN32)
    # Realign the stack, for compatibility with an older ABI.
    if (CMAKE_COMPILER_IS_GNUCXX)
	set_target_properties(smokeqt3dextras PROPERTIES COMPILE_FLAGS -mstackrealign)
    endif()

    # Get rid of the "lib" prefix on archives/DLLs in Windows.
    set_target_properties(smokeqt3dextras PROPERTIES PREFIX "" IMPORT_PREFIX "")
endif (WIN32)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/../qt3dextras_smoke.h DESTINATION include/smoke)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/qt3dextras.argnames.txt DESTINATION share/smoke)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/qt3dextras.typedefs.txt DESTINATION share/smoke)
