cmake_minimum_required(VERSION 3.2.6)

project(snailTail LANGUAGES C)

message("smail tail array")

add_executable(snailTail main.c)

set_target_properties(snailTail PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)