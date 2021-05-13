cmake_minimum_required(VERSION 3.17)
project(004)

set(CMAKE_CXX_STANDARD 11)

add_executable(004 main.cpp myHeader.h myCode.cpp)

set(CMAKE_EXE_LINKER_FLAGS -static)
target_link_libraries(004 -lOpenGL32)
