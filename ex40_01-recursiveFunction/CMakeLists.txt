cmake_minimum_required(VERSION 3.2.6)

project(ex4001RecursiveFunction LANGUAGES C)

message("ex40-01 recursive function")

add_executable(ex4001RecursiveFunction recursiveFunction.c)

set_target_properties(ex4001RecursiveFunction PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)