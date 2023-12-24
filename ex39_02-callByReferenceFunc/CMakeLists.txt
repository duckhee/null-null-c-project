cmake_minimum_required(VERSION 3.2.6)

project(ex3902CallByReference LANGUAGES C)

message("ex39-02 call by reference")

add_executable(ex3902CallByReference callByReference.c)

set_target_properties(ex3902CallByReference PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)