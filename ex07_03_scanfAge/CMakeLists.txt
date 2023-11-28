# cmake 최소 버전
cmake_minimum_required(VERSION 3.2.6)
# 프로젝트 설정
project(ex07_scanfAge LANGUAGES C)
# 메세지 출력
message("example scanf age")
# 실행 가능한 파일로 설정 및 소스 추가
add_executable(ex07_scanfAge scanfAge.c)
# 타겟 프로그램에 속성 정의
set_target_properties(ex07_scanfAge PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)
