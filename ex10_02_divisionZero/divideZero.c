#include <stdio.h>

int main() {
    int nInput = 0;
    printf("정수를 입력하세요 : ");
    // 입력 값 변수에 저장 -> 사용자의 입력 값은 절대로 신뢰를 하면 안된다.
    scanf("%d", &nInput);
    printf("%d\r\n", 10 / nInput);
    return 0;
}