#include <stdio.h>

typedef struct _dataFlag {
    // 8비트 중 1 비트만 사용하겠다는 bit field 선언이다.
    unsigned char main: 1;
    unsigned char left: 2;
    unsigned char right: 3;
    unsigned char top: 2;
} DataFlag;


int main() {
    // 0 부터 나올 수 있으므로 top 인 경우 최대 표현 범위가 3까지 이므로 overflow 발생한다.
    DataFlag flag = {0, 3, 7, 4};
    printf("main : %d\r\n", flag.main);
    printf("main bit mask : %d\r\n", *(unsigned char *) &flag & 0x01);
    printf("left : %d\r\n", flag.left);
    printf("left bit mask : %d\r\n", (*(unsigned char *) &flag & 0x06) >> 1);
    printf("right : %d\r\n", flag.right);
    printf("top(overflow) : %d\r\n", flag.top);
    // 현재 값을 16진수로 표현 시 3E 가 된다. -> 현재 값을 4비트로 끊어서 볼때 값이다.
    printf("pointer address : %X\r\n", *((unsigned char *) &flag));
    // 데이터 구조체의 크기 출력
    printf("structure bufSize : %zd\r\n", sizeof(flag));
    return 0;
}
