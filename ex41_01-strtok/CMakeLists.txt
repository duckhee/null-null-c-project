cmake_minimum_required(VERSION 3.2.6)

project(ex4101Strtok LANGUAGES C)

message("ex41-01 strtok")

add_executable(ex4101Strtok strtok.c)

set_target_properties(ex4101Strtok PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)

