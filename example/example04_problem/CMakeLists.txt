cmake_minimum_required(VERSION 3.2.6)

project(Problem04Solve LANGUAGES C)

message("problem04 solve")

add_executable(Problem04Solve solveProblem.c)

set_target_properties(Problem04Solve PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)