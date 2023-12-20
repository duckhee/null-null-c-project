#include <stdio.h>

int main() {
    int nAge = 0, fee = 750;
    printf("나이를 입력 하세요 : ");
    scanf("%d", &nAge);
    if (nAge >= 20) {
        nAge = 20;
        fee = 1000;
    }
    printf("나이 : %d, 최종 요금 : %d원\r\n", nAge, fee);

    return 0;
}