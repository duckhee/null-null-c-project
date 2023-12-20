cmake_minimum_required(VERSION 3.2.6)

project(ex3101PointerDynamicArray LANGUAGES C)

message("ex31-01 pointer dynamic array")

add_executable(ex3101PointerDynamicArray pointerDynamicArray.c)

set_target_properties(ex3101PointerDynamicArray PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)