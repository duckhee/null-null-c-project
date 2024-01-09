#include <stdio.h>

// 함수의 이름이 getMax 이다. => 함수형이다.
// calling convention 은 __cdecl 이다.
int __cdecl getMax(int a, int b, int c) {
    int nMax = a;
    if (b > nMax) nMax = b;
    if (c > nMax) nMax = c;
    return nMax;
}

int main() {
    // 함수형을 포인터 변수로 가지는 변수 선언
    int (__cdecl *pfGetMax)(int, int, int) = getMax;
    printf("getMax : %p\r\n", getMax);
    printf("pfGetMax : %p\r\n", pfGetMax);
    // 함수형 포인터를 이용해서 함수를 호출 하는 것
    printf("MAX : %d\r\n", pfGetMax(1, 3, 2));
    // 함수형 상수를 이용해서 함수를 호출 하는 것
    printf("MAX : %d\r\n", getMax(1, 3, 2));
    return 0;
}