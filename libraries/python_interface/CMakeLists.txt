project(my_python_package)

set(includes includes/ ../structure/ ../operations/)
set(sources src/my_python_package.cpp
            src/structure.cpp)


message(STATUS "[===] Python3_INCLUDE_DIRS: ${Python3_INCLUDE_DIRS}")
message(STATUS "[===] Python3_LIBRARIES: ${Python3_LIBRARIES}")
message(STATUS "[===] Python3_EXECUTABLE: ${Python3_EXECUTABLE}")

pybind11_add_module(my_python_package ${sources}) 
target_include_directories(${PROJECT_NAME} PUBLIC ${includes} ${common_includes_dir} ${Python3_INCLUDE_DIRS})
target_link_libraries(${PROJECT_NAME} PUBLIC structure operations)

install(TARGETS my_python_package
  COMPONENT python
  LIBRARY DESTINATION ${CUSTOM_LIBRARY_DIR_PYTHON}
  )