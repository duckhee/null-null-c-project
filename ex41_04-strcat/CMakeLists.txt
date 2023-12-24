cmake_minimum_required(VERSION 3.2.6)

project(ex4104Strcat LANGUAGES C)

message("ex41-04 strcat example")

add_executable(ex4104Strcat strcat.c)

set_target_properties(ex4104Strcat PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)