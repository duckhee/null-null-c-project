# cmake 최소 버전 설정
cmake_minimum_required(VERSION 3.2.6)
# 프로젝트 타겟 이름 정의
project(ex06_01_floatFormatter LANGUAGES C)
# message 출력
message("ex06 - 01 float formatter")
# 실행 파일로 설정
add_executable(ex06_01_floatFormatter floatFormatter.c)
# target 에 대한 설정
set_target_properties(ex06_01_floatFormatter PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)