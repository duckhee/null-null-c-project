cmake_minimum_required(VERSION 3.2.6)

project(multiIf LANGUAGES C)

message("ex18 multi if")

add_executable(multiIf multiIf.c)

set_target_properties(multiIf PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)