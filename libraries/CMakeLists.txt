project(libraries)

set(common_includes_dir ${CMAKE_CURRENT_SOURCE_DIR}/common/)

add_subdirectory(structure)
add_subdirectory(operations)
add_subdirectory(plugin)
add_subdirectory(python_interface)

