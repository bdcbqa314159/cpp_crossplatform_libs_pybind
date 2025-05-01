project(structure)

set(includes includes/)
set(sources src/structure.cpp)

add_library(${PROJECT_NAME} SHARED ${sources})
target_include_directories(${PROJECT_NAME} PUBLIC ${includes} ${common_includes_dir})

install(TARGETS structure DESTINATION ${CUSTOM_LIBRARY_DIR_PYTHON})