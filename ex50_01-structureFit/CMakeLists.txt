cmake_minimum_required(VERSION 3.2.6)

project(ex5001StructureFit LANGUAGES C)

message("ex50-01 structure fit")

add_executable(ex5001StructureFit structureFit.c)

set_target_properties(ex5001StructureFit PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)