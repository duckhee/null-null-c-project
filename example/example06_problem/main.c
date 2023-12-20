#include <stdio.h>

int main() {
    int x = 0, y = 0;
    int result = 0;
    scanf("%d%d", &x, &y);
    // window에서 사용하는 함수
//    scanf_s("%d%d", &x,1,&y,1);
    // 뺄셈은 보수의 합에 1을 더해준 것과 같다.
    result = x + (~y + 1);
    printf("%d\r\n", result);
    // 번외로 홀짝 구하는 방법 result % 2 == 0의 방법으로 나머지가 0일 경우 짝수 1일 경우 홀수
    printf("짝수 : %d \r\n", (result % 2) == 0);
    // 비트 연산으로 홀수인지 아는 방법 result & 0x00000001 == 0 0이면 짝수 1이면 홀수
    printf("짝수 %d\r\n", (result & 0x00000001) == 0);
    return 0;
}