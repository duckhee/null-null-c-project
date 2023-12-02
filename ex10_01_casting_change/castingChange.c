#include <stdio.h>

int main() {
    char ch = 'A';
    // char 형 출력
    printf("%c\r\n", ch);
    // char 형 출력
    printf("%c\r\n", ch + 1);
    // 정수형 출력
    printf("%d\r\n", ch + 1);
    // // char 형 출력
    printf("%c\r\n", 'A' + 2);
    // 정수형 출력 -> double 형태의 덧셈으로 인해 값이 제대로 나오지 않는다.
    printf("%d\r\n", 5.0 + 2);
    // float 형 출력
    printf("%f\r\n", 5.0 + 2);
    return 0;
}