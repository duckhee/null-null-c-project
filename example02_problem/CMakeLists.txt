cmake_minimum_required(VERSION 3.2.6)

project(Example02 LANGUAGES C)

message("example problem 02")

add_executable(Example02 ex02problem.c)

set_target_properties(Example02 PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)
