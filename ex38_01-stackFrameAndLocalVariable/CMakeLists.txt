cmake_minimum_required(VERSION 3.2.6)

project(ex3801StackFrame LANGUAGES C)

message("ex38-01 stack frame and local variable")

add_executable(ex3801StackFrame stackFrame.c)

set_target_properties(ex3801StackFrame PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)
