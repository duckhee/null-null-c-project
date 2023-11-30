#include <stdio.h>

int main() {
    // 결과 값을 넣을 변수 선언 및 초기화
    // 지역 변수 -> 스코프 안에서 선언된 변수 (스코프 안에서만 유효하다.)
    int nResult = 0;
    // 이항 연산 진행 -> 여기서 임시 저장값 생성 3 + 4 결과 값 3 + 4 - 5
    nResult = 3 + 4 - 5;
    // 이항 연산 결과 값 실행
    printf("nResult : %d \r\n", nResult);
    nResult = 0;
    nResult = 3 + 4;
    // 임시 결과 값을 출력 하는 형태
    printf("nResult : %d\r\n", nResult - 5);
    return 0;
}