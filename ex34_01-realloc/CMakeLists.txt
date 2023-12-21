cmake_minimum_required(VERSION 3.2.6)

project(ex3401Realloc LANGUAGES C)

message("ex34-01 realloc")

add_executable(ex3401Realloc realloc.c)

set_target_properties(ex3401Realloc PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)