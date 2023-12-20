#include <stdio.h>

int main() {
    char szBuffer[16] = {"Hello"};
    char *pszData = szBuffer;
    // 문자열의 길이를 가져오기 위한 loop
    while (*pszData != '\0') {
        pszData++;
    }
    printf("&pszData : %p, &szBuffer : %p\r\n", pszData, szBuffer);
    // 상대 주소를 계산하는 것
    // 포인터가 이동을 했고, 기준 주소를 빼주면 이동한 횟수를 나타난다.
    printf("Length : %d\r\n", pszData - szBuffer);
    return 0;
}