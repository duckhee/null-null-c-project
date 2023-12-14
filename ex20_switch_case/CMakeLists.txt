cmake_minimum_required(VERSION 3.2.6)

project(ex20_SwitchCase LANGUAGES C)

message("ex20 switch case")

add_executable(ex20_SwitchCase switchCase.c)

set_target_properties(ex20_SwitchCase PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)