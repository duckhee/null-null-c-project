# cmake 최소 버전
cmake_minimum_required(VERSION 3.2.6)
# project 설정
project(exampleProblem)
# message 출력
message("exampleProblem solve")
# 실행 프로그램 정의
add_executable(exampleProblem main.c)
# 타겟 프로그램 프로퍼티 설정
set_target_properties(exampleProblem PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)