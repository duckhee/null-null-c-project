cmake_minimum_required(VERSION 3.2.6)

project(ex28MultiDimensionalArray LANGUAGES C)

message("ex28 multi-dimensional array")

add_executable(ex28MultiDimensionalArray multiDimensionalArray.c)

set_target_properties(ex28MultiDimensionalArray PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)