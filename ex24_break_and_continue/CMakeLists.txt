cmake_minimum_required(VERSION 3.2.6)

project(ex24_BreakAndContinue LANGUAGES C)

message("ex24 break and continue")

add_executable(ex24_BreakAndContinue breakAndContinue.c)

set_target_properties(ex24_BreakAndContinue PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)
