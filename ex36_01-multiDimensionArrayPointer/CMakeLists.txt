cmake_minimum_required(VERSION 3.2.6)

project(ex3601MultiDimensionArrayPointer LANGUAGES C)

message("ex36 multi dimension array pointer")

add_executable(ex3601MultiDimensionArrayPointer multiDimensionArrayPointer.c)

set_target_properties(ex3601MultiDimensionArrayPointer PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)