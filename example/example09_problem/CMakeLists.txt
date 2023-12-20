cmake_minimum_required(VERSION 3.2.6)

project(Example09 LANGUAGES C)

message("example09 최대 값 토너먼트")

add_executable(Example09 main.c)

set_target_properties(Example09 PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)