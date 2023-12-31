cmake_minimum_required(VERSION 3.2.6)

project(example25Problem LANGUAGES C)

message("example25 solve problem structure")

add_executable(example25Problem main.c)

set_target_properties(example25Problem PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)