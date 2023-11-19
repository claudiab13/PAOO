cmake_minimum_required(VERSION 3.10)
project(OOPIntro VERSION 1.0)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
add_subdirectory(lib)
add_executable(Student main.cpp)
target_link_libraries(Student PUBLIC StudentLib)
target_include_directories(Student PUBLIC
                        "$(PROJECT_BINARY_DIR)"
                        "$(PROJECT_SOURCE_DIR/lib)"
                        )
