cmake_minimum_required(VERSION 3.2.6)

project(ex3501MultiPointer LANGUAGES C)

message("ex35-01 multi pointer")

add_executable(ex3501MultiPointer multiPointer.c)

set_target_properties(ex3501MultiPointer PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)