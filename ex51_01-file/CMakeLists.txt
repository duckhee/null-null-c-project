cmake_minimum_required(VERSION 3.2.6)

project(ex5101FileExample LANGUAGES C)

message("ex51-01 file example")

add_executable(ex5101FileExample fileExample.c)

set_target_properties(ex5101FileExample PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)