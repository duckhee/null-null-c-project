cmake_minimum_required(VERSION 3.2.6)

project(ex4501Struct LANGUAGES C)

message("ex45-01 struct study")

add_executable(ex4501Struct struct.c)

set_target_properties(ex4501Struct PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)