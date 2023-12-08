# CMake 최소 버전 설정
cmake_minimum_required(VERSION 3.26)

# 프로젝트에 대한 설정 -> 프로젝트 이름 정의 및 언어 설정 C
project(nullnull_c_project LANGUAGES C)
# CMake 의 C 버전을 전역으로 설정 하는 것
#set(CMAKE_C_STANDARD 99)

# add sub directory
add_subdirectory(ex01_helloworld)
add_subdirectory(ex02_getchar_sample)
add_subdirectory(ex03_gets_sample)
add_subdirectory(ex04_gets_security_problem)
add_subdirectory(ex05_escSeq)
add_subdirectory(ex05_format)
add_subdirectory(ex06_float_print)
add_subdirectory(ex06_01_float_format2)
add_subdirectory(ex07_01_scanfChar)
add_subdirectory(ex07_02_scanfInteger)
add_subdirectory(ex07_03_scanfAge)
add_subdirectory(ex08_scanf_string)
add_subdirectory(example01_problem)
add_subdirectory(ex09_01_addSample)
add_subdirectory(ex09_02_modSample)
add_subdirectory(ex10_01_casting_change)
add_subdirectory(ex10_02_divisionZero)
add_subdirectory(example02_problem)
add_subdirectory(example03_problem)
add_subdirectory(ex11_01_assignErrorSample)
add_subdirectory(example04_problem)
add_subdirectory(example05_problem)
add_subdirectory(ex12_01_overflow)
add_subdirectory(ex12_02_conditional_operator)
add_subdirectory(ex13_01_bit_mask)
add_subdirectory(example06_problem)
add_subdirectory(ex13_02_sizeof)
add_subdirectory(ex14_01_short_circuit)
add_subdirectory(ex14_02_wrong_condition)
add_subdirectory(ex15_01_TernaryOperator)


# 프로젝트를 실행 가능한 파일로 설정 및 소스 추가
add_executable(nullnull_c_project main.c)
# cmake c version setting
set_target_properties(nullnull_c_project PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)
