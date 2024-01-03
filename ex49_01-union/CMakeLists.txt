cmake_minimum_required(VERSION 3.2.6)

project(ex4901Union LANGUAGES C)

message("ex49-01 union")

add_executable(ex4901Union union.c)

set_target_properties(ex4901Union PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)