# cmake 최소 버전 정의
cmake_minimum_required(VERSION 3.2.6)

# project 타겟 설정
project(ex06PrintFloat LANGUAGES C)
# message 출력
message("ex06 print float formatter")
# 실행 파일로 생성 설정
add_executable(ex06PrintFloat floatPrint.c)
# 타겟에 대한 설정
set_target_properties(ex06PrintFloat PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)