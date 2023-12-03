cmake_minimum_required(VERSION 3.2.6)

project(ex05_solveProblem LANGUAGES C)

message("example05 solve ")

add_executable(ex05_solveProblem exampleProblem.c)

set_target_properties(ex05_solveProblem PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)