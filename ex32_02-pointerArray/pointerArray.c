#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char szBuffer[12] = {"Hello"};
    // 주소 값을 대입을 해준다.
    char *pszData = szBuffer;
    // 배열의 길이를 담기 위한 변수
    int nLength = 0;
    // null 값이 나올 때까지 반복
    while(*pszData != '\0'){
        pszData++;
        nLength++;
    }
    printf("Length : %d\r\n", nLength);
    printf("Length : %d\r\n", strlen(szBuffer));
    printf("Length : %d\r\n", strlen("World"));
    return 0;
}