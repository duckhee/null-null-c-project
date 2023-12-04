cmake_minimum_required(VERSION 3.2.6)

project(conditionalOperator LANGUAGES C)

message("ex12 02 conditionalOperator")

add_executable(conditionalOperator conditionalOperator.c)

set_target_properties(conditionalOperator PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)