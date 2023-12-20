cmake_minimum_required(VERSION 3.2.6)

project(example03-calcTime)


message("example03 problem")

add_executable(example03-calcTime calcTime.c)

set_target_properties(example03-calcTime PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)