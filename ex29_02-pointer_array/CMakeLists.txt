cmake_minimum_required(VERSION 3.2.6)

project(ex2902PointerArray LANGUAGES C)

message("ex29-02 pointer array")

add_executable(ex2902PointerArray pointerArray.c)

set_target_properties(ex2902PointerArray PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)