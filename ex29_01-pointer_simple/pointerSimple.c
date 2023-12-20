#include <stdio.h>

int main() {
    int nData = 10;
    // 포인터 변수 선언 -> 포인터 변수는 주소 값을 담는 변수이다.
    int *pnData = &nData;
    // nData\0 -> char[6]이다.
    // 문자열 출력은 첫번째 글자가 저장된 주소 값의 시작 위치부터 null 값인 \0가 나올때까지 출력을 해주는 서식지정자이다.
    printf("%s\r\n", "nData");

    printf("%d\r\n", nData);
    // 주소 값을 표현하기 위한 형식지정자
    printf("%p\r\n", &nData);
    // 포인터 변수의 값을 가져오는 것
    printf("%d\r\n", *pnData);
    // 포인터 변수에 담겨져 있는 주소 값을 출력하는 것
    printf("%p\r\n", pnData);
    return 0;
}