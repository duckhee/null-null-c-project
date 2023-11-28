#include <stdio.h>

int main() {
    // 실수 자료 형식의 메모리 크기 (바이트 단위)를 출력
    printf("%d\r\n", sizeof(123.456F)); // f 가 붙으면 , float 형이라는 것을 의미한다.
    printf("%d\r\n", sizeof(123.456));

    // float 형식을 실수 형식으로 출력
    printf("%f\r\n", 123.456F);

    // double 형식을 실수 형식으로 출력
    printf("%f\r\n", 123.456); // double 형
    printf("%lf\r\n", 123.456); // long double 형
    printf("%g\r\n", 123.456); // long double 형

    return 0;
}