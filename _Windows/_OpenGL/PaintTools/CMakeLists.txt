cmake_minimum_required(VERSION 3.17)
project(PaintTool)

set(CMAKE_CXX_STANDARD 11)

add_executable(PaintTool main.cpp myHeader.h myCode.cpp PaintTools.h Angles.h Angles.cpp main.cpp)


set(CMAKE_EXE_LINKER_FLAGS -static)
target_link_libraries(PaintTool -lOpenGL32)
