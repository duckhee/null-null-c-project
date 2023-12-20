cmake_minimum_required(VERSION 3.2.6)

project(ex3102_pointerDynamicArray LANGUAGES C)

message("ex31-02 dynamic pointer ")

add_executable(ex3102_pointerDynamicArray pointerDynamicArray.c)

set_target_properties(ex3102_pointerDynamicArray PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)