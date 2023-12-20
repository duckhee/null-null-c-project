#include <stdio.h>
#include <string.h>

int main() {
    char szBuffer[16] = {"Hello"};
    char *pszData = szBuffer;
    int nLength = 0;
    while (*pszData != '\0') {
        pszData++;
        nLength++;
    }
    printf("Length : %d\r\n", nLength);
    // 문자열의 길이를 알려주는 함수 -> strlen(const char *s);
    printf("Length : %d\r\n", strlen(szBuffer));
    return 0;
}