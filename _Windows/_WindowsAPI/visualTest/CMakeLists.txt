cmake_minimum_required(VERSION 3.17)
project(visualTest)

set(CMAKE_CXX_STANDARD 11)

add_executable(visualTest main.cpp)

target_link_libraries(visualTest libgdi32.a)