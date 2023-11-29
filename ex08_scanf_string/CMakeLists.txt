# cmake 최소 버전 설정
cmake_minimum_required(VERSION 3.2.6)
# 타겟 프로젝트 설정
project(ex08ScanfString LANGUAGES C)
# 메세지 출력
message("scanf string example")
# 실행 가능 파일로 생성
add_executable(ex08ScanfString scanfString.c)
# 타겟에 대한 속성 정의
set_target_properties(ex08ScanfString PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)


