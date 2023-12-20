#include <stdio.h>
#include <stdlib.h>
#include <string.h> // memory 를 초기화 하는 memset을 사용하기 위한 라이브러리 헤더 추가

int main() {
    int *pList = NULL, *pNewList = NULL;
    int aList[3] = {0};

    pList = (int *) malloc(sizeof(int) * 3);
    // 메모리를 초기화할 때 사용하는 함수
    memset(pList, 0, sizeof(int) * 3);
    // 초기화 되어 있는 동적 할당 하는 방법 -> 선언을 하는 방식이 자료형의 크기와 사용할 자료형의 길이를 넣어주는 형태로 malloc과 다른 점이다.
    pNewList = (int *) calloc(3, sizeof(int));
    for (int i = 0; i < 3; ++i) {
        printf("pList[%d] 의 값 : %d\r\n", i, pList[i]);
    }
    for (int i = 0; i < 3; ++i) {
        printf("pNewList[%d] 의 값 : %d\r\n", i, pNewList[i]);
    }
    free(pList);
    free(pNewList);
    return 0;
}