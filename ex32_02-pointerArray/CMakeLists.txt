cmake_minimum_required(VERSION 3.2.6)

project(ex3202PointerArray)

message("ex32-02 pointer array")

add_executable(ex3202PointerArray pointerArray.c)

set_target_properties(ex3202PointerArray PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)