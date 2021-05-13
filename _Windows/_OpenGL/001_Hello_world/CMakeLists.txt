cmake_minimum_required(VERSION 3.17)
project(001_Hello_world)

set(CMAKE_CXX_STANDARD 11)
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -static-libstdc++ -static-libgcc")
set(CMAKE_EXE_LINKER_FLAGS -static)
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -s -O3")

add_executable(001_Hello_world main.cpp)

target_link_libraries(001_Hello_world -lOpenGL32)
#target_link_libraries(OpenGL_01 -lOpenGL32 -lfreeGLUT) #IF another MinGW is used
