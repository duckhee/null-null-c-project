
cmake_minimum_required(VERSION 3.2.6)

project(divideZero LANGUAGES C)

message("ex10-02 division zero")

add_executable(divideZero divideZero.c)

set_target_properties(divideZero PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)
