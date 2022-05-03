
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

set(Qt53danimation_INCLUDE_DIRS ${Qt_ROOT_DIR}/include/Qt3DAnimation)

create_configure_files("${Qt5Core_INCLUDE_DIRS};${Qt5Gui_INCLUDE_DIRS};${Qt53danimation_INCLUDE_DIRS}")
get_smokegen_args(smokegenArgs qt3danimation)
run_smokegen(1 "${smokegenArgs}")
get_smokegen_output_files(smokeqt3danimation_LIB_SRCS 1)

IF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")
    ADD_DEFINITIONS(-DGCC_VISIBILITY)
ENDIF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")

add_library(smokeqt3danimation SHARED ${smokeqt3danimation_LIB_SRCS})

target_link_libraries(smokeqt3danimation
    smokeqtcore 
    smokeqtgui 
    Qt5::Core
    Qt5::Gui
    Qt5::3DAnimation
	
)

set_target_properties(smokeqt3danimation
    PROPERTIES
    VERSION ${VERSION_MAJOR}.${VERSION_MINOR}.${VERSION_PATCH}
    SOVERSION ${VERSION_MAJOR}
    CXX_STANDARD 14
)


install(TARGETS smokeqt3danimation LIBRARY DESTINATION ${LIB_INSTALL_DIR}
    ARCHIVE DESTINATION ${LIB_INSTALL_DIR}
    RUNTIME DESTINATION bin)

if (WIN32)
    # Realign the stack, for compatibility with an older ABI.
    if (CMAKE_COMPILER_IS_GNUCXX)
	set_target_properties(smokeqt3danimation PROPERTIES COMPILE_FLAGS -mstackrealign)
    endif()

    # Get rid of the "lib" prefix on archives/DLLs in Windows.
    set_target_properties(smokeqt3danimation PROPERTIES PREFIX "" IMPORT_PREFIX "")
endif (WIN32)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/../qt3danimation_smoke.h DESTINATION include/smoke)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/qt3danimation.argnames.txt DESTINATION share/smoke)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/qt3danimation.typedefs.txt DESTINATION share/smoke)
