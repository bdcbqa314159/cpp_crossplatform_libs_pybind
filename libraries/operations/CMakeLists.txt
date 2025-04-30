project(operations)

set(includes includes/ ../structure/)
set(sources src/operations.cpp)

add_library(${PROJECT_NAME} SHARED ${sources})
target_include_directories(${PROJECT_NAME} PUBLIC ${includes} ${common_includes_dir})
target_link_libraries(${PROJECT_NAME} PUBLIC structure)