# cmake 최소 버전 설정
cmake_minimum_required(VERSION 3.2.6)

# project name setting
project(ex03_getsSample LANGUAGES C)

# c compiler version set
set(CMAKE_C_STANDARD 99)

# message setting
message("gets sample build")

# build
add_executable(ex03_getsSample getsSample.c)