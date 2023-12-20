cmake_minimum_required(VERSION 3.2.6)

project(Problem11 LANGUAGES C)

message("problem 11 bus price selector")

add_executable(Problem11 main.c)

set_target_properties(Problem11 PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)