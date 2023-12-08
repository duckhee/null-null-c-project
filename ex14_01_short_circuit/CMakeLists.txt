
cmake_minimum_required(VERSION 3.2.6)

project(ShortCircuit LANGUAGES C)

message("example 13 02 sizeof")

add_executable(ShortCircuit shortCircuit.c)

set_target_properties(ShortCircuit PROPERTIES C_STANDARD 99 c_STANDARD_REQUIRED ON)