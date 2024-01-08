cmake_minimum_required(VERSION 3.2.6)

project(ex6001ConditionCompile LANGUAGES C)

message("ex60-01 conditional compile")

add_executable(ex6001ConditionCompile conditionCompile.c)

set_target_properties(ex6001ConditionCompile PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)