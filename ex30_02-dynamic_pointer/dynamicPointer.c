#include <stdio.h>
#include <stdlib.h> // 메모리 관련 malloc free 를 사용하기 위한 라이브러리 추가
#include <string.h>

int main() {
    int *pList = NULL;
    // 동적으로 메모리 할당
    pList = (int *) malloc(sizeof(int) * 3);


    pList[0] = 10;
    pList[1] = 20;
    pList[2] = 30;
    for (int i = 0; i < 3; i++) {
        printf("plist[%d] : %d\r\n", i, pList[i]);
    }
    // 메모리를 초기화 하는 함수
    memset(&pList, '\0', 3);
    for (int i = 0; i < 3; i++) {
        printf("plist[%d] : %d\r\n", i, pList[i]);
    }
    // 동적으로 할당 받은 메모리 해제
    free(pList);
    return 0;
}