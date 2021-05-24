cmake_minimum_required(VERSION 3.17)
project(NewGLUT)



set(CMAKE_CXX_STANDARD 14)
add_executable(NewGLUT main.cpp)




target_link_libraries(NewGLUT  -L"E:/_OneDrive/OneDrive/_CPP_projects/_Windows/_OpenGL/NewGLUT/lib" -lfreeglut -lopengl32)
#target_link_libraries(NewGLUT  -L"E:/_OneDrive/OneDrive/_CPP_projects/_Windows/_OpenGL/NewGLUT/lib" -lfreeglut_static -lopengl32 -lwinmm -lgdi32 -Wl,--subsystem,windows )
#target_link_libraries(NewGLUT -D FREEGLUT_STATIC -D GLEW_STATIC)

set(CMAKE_EXE_LINKER_FLAGS -static)