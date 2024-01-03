#include <stdio.h>
#include <stdlib.h>

// 공용체도 형 재선언을 해서 사용하는 것이 일반적이다.
typedef union _ipAddr {
    int nAddress;
    short awData[2];
    unsigned char addr[4];
} IP_ADDR;

int main() {
    IP_ADDR ip = {0};
//    ip.nAddress = 0x41424344;
    ip.addr[0] = 192;
    ip.addr[1] = 168;
    ip.addr[2] = 0;
    ip.addr[3] = 1;
    printf("%d.%d.%d.%d\r\n", ip.addr[0], ip.addr[1], ip.addr[2], ip.addr[3]);
//    printf("%c.%c.%c.%c\r\n", ip.addr[0], ip.addr[1], ip.addr[2], ip.addr[3]);
//    printf("%X, %d\r\n", ip.awData[0], ip.awData[0]);
//    printf("%X, %d\r\n", ip.awData[1], ip.awData[1]);
    return 0;
}