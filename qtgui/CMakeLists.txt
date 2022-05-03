
include_directories(${CMAKE_CURRENT_SOURCE_DIR} ${Vulkan_INCLUDE_DIR})

create_configure_files("${Qt5Core_INCLUDE_DIRS};${Vulkan_INCLUDE_DIR};${Qt5Gui_INCLUDE_DIRS}")
get_smokegen_args(smokegenArgs qtgui)
run_smokegen(20 "${smokegenArgs}")
get_smokegen_output_files(smokeqtgui_LIB_SRCS 20)

IF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")
    ADD_DEFINITIONS(-DGCC_VISIBILITY)
ENDIF(CMAKE_CXX_FLAGS MATCHES "-fvisibility")

add_library(smokeqtgui SHARED ${smokeqtgui_LIB_SRCS} ${Vulkan_LIBRARY})

target_link_libraries(smokeqtgui
    smokeqtcore
    Qt5::Core
    Qt5::Gui
    Qt5::OpenGL
    #Qt5::VulkanSupport
)

set_target_properties(smokeqtgui
    PROPERTIES
    VERSION ${VERSION_MAJOR}.${VERSION_MINOR}.${VERSION_PATCH}
    SOVERSION ${VERSION_MAJOR}
    CXX_STANDARD 14
)

install(TARGETS smokeqtgui LIBRARY DESTINATION ${LIB_INSTALL_DIR}
    ARCHIVE DESTINATION ${LIB_INSTALL_DIR}
    RUNTIME DESTINATION bin)

if (WIN32)
    # Realign the stack, for compatibility with an older ABI.
    if (CMAKE_COMPILER_IS_GNUCXX)
	set_target_properties(smokeqtgui PROPERTIES COMPILE_FLAGS -mstackrealign)
    endif()

    # Get rid of the "lib" prefix on archives/DLLs in Windows.
    set_target_properties(smokeqtgui PROPERTIES PREFIX "" IMPORT_PREFIX "")
endif (WIN32)

install(FILES ${CMAKE_CURRENT_SOURCE_DIR}/../qtgui_smoke.h DESTINATION include/smoke)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/qtgui.argnames.txt DESTINATION share/smoke)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/qtgui.typedefs.txt DESTINATION share/smoke)
