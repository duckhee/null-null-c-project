#include <stdio.h>

int main() {
    int nInput = 0, nInputTime = 0;
    int hour = 0, min = 0, second = 0;
    printf("정수를 입력하세요 :  ");
    scanf("%d", &nInputTime);
    nInput = nInputTime;
    hour = nInputTime / 3600;
    nInputTime = nInputTime % 3600;
    min = nInputTime / 60;
    nInputTime = nInputTime % 60;
    second = nInputTime;
    printf("%d 초는 %d시간 %02d 분 %02d 초입니다.\r\n", nInput, hour, min, second);
    return 0;
}