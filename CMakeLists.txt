# CMake 최소 버전 설정
cmake_minimum_required(VERSION 3.26)

# 프로젝트에 대한 설정 -> 프로젝트 이름 정의 및 언어 설정 C
project(nullnull_c_project LANGUAGES C)
# CMake 의 C 버전을 전역으로 설정 하는 것
set(CMAKE_C_STANDARD 99)

# 프로젝트를 실행 가능한 파일로 설정 및 소스 추가
add_executable(nullnull_c_project main.c)

