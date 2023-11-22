# CMake 최소 버전 설정
cmake_minimum_required(VERSION 3.0.0)
# 이 프로젝트 명 설정
project(ex01_hello_world LANGUAGES C)
# C 언어 문법에 대한 설정
set(CMAKE_C_STANDARD 99)

message("BUILD Hello World")
# 프로그램 정의 => 실행 가능한 파일로 생성
add_executable(ex01_hello_world hello.c)