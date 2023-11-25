# cmake 최소 버전 설정
cmake_minimum_required(VERSION 3.2.6)
# 타겟 프로그램 이름 정의 -> 타겟에서 사용되는 언어에 대한 설정
project(ex02_getchar_sample LANGUAGES C)
# C Compiler 에 대한 C 언어 버전 설정
set(CMAKE_C_STANDARD 99)
# 출력 메세지
message("create get char")
# make program execute
add_executable(ex02_getchar_sample getchar_sample.c)