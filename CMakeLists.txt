cmake_minimum_required(VERSION 3.10)
project(OOPIntro VERSION 1.0)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
add_subdirectory(exe lab3.cxx)
target_link_libraries(exe PUBLIC
                        "$(PROJECT_BINARY_DIR)"
                        "$(PROJECT_SOURCE_DIR/class)"
                        )
