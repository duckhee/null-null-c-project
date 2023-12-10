cmake_minimum_required(VERSION 3.2.6)

project(BasicIf LANGUAGES C)

message("ex16-01 basic if ")

add_executable(BasicIf basicIf.c)

set_target_properties(BasicIf PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)