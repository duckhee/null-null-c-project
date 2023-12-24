cmake_minimum_required(VERSION 3.2.6)

project(ex3903callByReference LANGUAGES C)

message("ex39-03 call by reference")

add_executable(ex3903callByReference callByReference.c)

set_target_properties(ex3903callByReference PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)