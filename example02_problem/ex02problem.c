/**
 * 필수 실습 문제
 *
 * 사용자로부터 두 정수를 입력 받아 평균을 출력하는
 * 예제를 작성 입력은 반드시 scanf_s() 함수를 사용하고 출력은 printf() 함수를 이용할 것
 * 평균 값 출력 시 반드시 소수점 둘째 자리까지만 표시
 * 두 정수를 입력하세요 : 10 20
 * AVG : 15.00
 */
#include <stdio.h>

int main() {
    int nFInput = 0;
    int nSInput = 0;
    printf("두 정수를 입력하세요 : ");
    scanf("%d%d", &nFInput, &nSInput);
//    scanf_s("%d%d", &nFInput, 1, &nSInput, _countof(nSInput));
    printf("AVG : %0.2f\r\n", (nFInput + nSInput) / 2.0);
    return 0;
}