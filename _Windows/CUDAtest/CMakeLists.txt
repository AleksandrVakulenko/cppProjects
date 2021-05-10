cmake_minimum_required(VERSION 3.17)
project(CUDAtest CUDA)

set(CMAKE_CUDA_COMPILER "C:/Program Files/NVIDIA GPU Computing Toolkit/CUDA/v11.2/bin/nvcc.exe")

set(CMAKE_CUDA_STANDARD 11)

add_executable(CUDAtest main.cu)

set_target_properties(
        CUDAtest
        PROPERTIES
        CUDA_SEPARABLE_COMPILATION ON)