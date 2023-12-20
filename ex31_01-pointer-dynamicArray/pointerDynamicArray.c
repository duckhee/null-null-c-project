#include <stdio.h>
#include <stdlib.h>

int main() {
    char szBuffer[] = {"Hello"};
    char *pszBuffer = "Hello";
    char *pszData = NULL;

    pszData = (char *) malloc(sizeof(char) * 6);
    pszData[0] = 'H';
    pszData[1] = 'e';
    pszData[2] = 'l';
    pszData[3] = 'l';
    pszData[4] = 'o';

    puts(szBuffer);
    puts(pszBuffer);
    puts(pszData);
    // malloc 로 동적 할당 받은 포인터 변수는 free 를 이용해서 해제를 해줘야한다.
    free(pszData);
    return 0;
}