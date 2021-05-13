cmake_minimum_required(VERSION 3.17)
project(Test01)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_EXE_LINKER_FLAGS -static)
add_executable(Test01 main.cpp)