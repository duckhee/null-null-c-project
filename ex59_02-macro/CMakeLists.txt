cmake_minimum_required(VERSION 3.2.6)

project(ex5902Macro LANGUAGES C)

message("ex59-02 macro study")

add_executable(ex5902Macro macroStudy.c)

set_target_properties(ex5902Macro PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)
