#include <stdio.h>

/**
 * gets() 함수의 보안 문제에 대해서 확인
 * */
int main(void) {

    char szBuffer[8] = {0};
    // szBuffer 를 벗어나게 입력을 받으면, over flow 로 인해서 문제가 생긴다.
    gets(szBuffer);
    // unix 게열에서 보안 코딩
//    fgets(szBuffer, sizeof(szBuffer), stdin);
    // 윈도우 계열에서 보안 코딩
//    gets_s(szBuffer, sizeof(szBuffer));
    puts(szBuffer);
    return 0;
}
