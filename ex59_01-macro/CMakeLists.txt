
cmake_minimum_required(VERSION 3.2.6)

project(ex5901Macro LANGUAGES C)

message("ex59-01 macro define")

add_executable(ex5901Macro macroStudy.c)

set_target_properties(ex5901Macro PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)
