cmake_minimum_required(VERSION 3.2.6)

project(ex4301Rand LANGUAGES C)

message("ex43-01 rand and srand")

add_executable(ex4301Rand rand.c)

set_target_properties(ex4301Rand PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)