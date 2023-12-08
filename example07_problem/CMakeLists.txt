cmake_minimum_required(VERSION 3.2.6)

project(gradeCalc LANGUAGES C)

message("example07 설적 점수 구하기")

add_executable(gradeCalc main.c)

set_target_properties(gradeCalc PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)