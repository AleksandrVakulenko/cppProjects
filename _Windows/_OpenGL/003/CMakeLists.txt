cmake_minimum_required(VERSION 3.17)
project(003)

set(CMAKE_CXX_STANDARD 11)

add_executable(003 main.cpp)

set(CMAKE_EXE_LINKER_FLAGS -static)
target_link_libraries(003 -lOpenGL32)
