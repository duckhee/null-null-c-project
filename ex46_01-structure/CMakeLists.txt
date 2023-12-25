cmake_minimum_required(VERSION 3.2.6)

project(ex4601Struct LANGUAGES C)

message("ex56-01 struct")

add_executable(ex4601Struct struct.c)

set_target_properties(ex4601Struct PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)