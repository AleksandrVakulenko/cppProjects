cmake_minimum_required(VERSION 3.17)
project(ConsoleTest)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_EXE_LINKER_FLAGS -static)

add_executable(ConsoleTest main.cpp)