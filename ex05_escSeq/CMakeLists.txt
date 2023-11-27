# cmake 최소 버전 설정
cmake_minimum_required(VERSION 3.2.6)
# project 설정
project(ex05_escSequence
        LANGUAGES C)

# c 언어 버전 설정
set(CMAKE_C_STANDARD 99)

# message
message("escape sequence build")

add_executable(ex05_escSequence escSequence.c)