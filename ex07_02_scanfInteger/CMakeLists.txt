# cmake 최소 버전 설정
cmake_minimum_required(VERSION 3.2.6)
# 프로젝트 언어 설정 및 프로젝트 설정
project(ex07_02_scanfInteger LANGUAGES C)
# 메세지 정의
message("ex07 02 scanf integer")
# 실행 가능한 파일로 설정
add_executable(ex07_02_scanfInteger scanfInteger.c)
# 타겟 프로그램의 속성 설정
set_target_properties(ex07_02_scanfInteger PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)