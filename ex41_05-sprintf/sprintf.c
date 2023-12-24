#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *myStrcat(char *dst, char *src) {
    // 첫번째 문자열의 끝 지점을 찾기 위한 위치 찾기 위한 반복문
    while(*dst != '\0'){
        ++dst;
    }
    // 널 값이 아니면 간접 참조로 가져온 값을 메모리에 복사해준다.
    while(*src != '\0'){
        *dst++ = *src++;
    }
    // 마지막 문자열인 널 값 넣어주는 것
    *++dst = '\0';
    // NULL 값이 들어가기 전에 있는 주소 값을 반홚나다.
    return --dst;
}

int main(int argc, char **argv) {
    char szPath[128] = {0};
    char szBuffer[128] = {0};
    printf("Input Path : ");
    fgets(szBuffer, sizeof(szBuffer), stdin);
    // window 에서 사용
    // gets_s(szBuffer, sizeof(szBuffer));
    sprintf(szPath, "C:\\Program Files\\%s", szBuffer);
    // window 에서 사용
    // sprintf_s(szPath, _countof(szPath), "C:\\Program Files\\%s", szBuffer);
    puts(szPath);
    return 0;
}