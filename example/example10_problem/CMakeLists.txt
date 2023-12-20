cmake_minimum_required(VERSION 3.2.6)

project(Problem LANGUAGES C)

message("최댓값 구하기 - if 문")

add_executable(Problem main.c)

set_target_properties(Problem PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)