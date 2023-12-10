#include <stdio.h>

int main() {
    int nAge = 0;

    printf("나이를 입력 하세요 : ");
    scanf("%d", &nAge);
    if (nAge >= 20)
        printf("당신의 나이는 %d세 입니다.\r\n", nAge);

    puts("END");
    return 0;
}