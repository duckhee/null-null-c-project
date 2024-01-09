#include <stdio.h>
#include <stdlib.h>

int myCompare(const void *param1, const void *param2) {
    // int 형으로 형 변홚 하는 것
    printf("parameter1 : %d\r\n", *(int *) param1);
    printf("parameter1 : %p\r\n", param1);
    printf("parameter2 : %d\r\n", *(int *) param2);
    printf("parameter2 : %p\r\n", param2);
    // 오름 차순 정렬
    return *(int *) param1 - *(int *) param2;
    // 내림 차순 정렬
//    return *(int *) param2 - *(int *) param1;
}

int main() {
    int aList[5] = {30, 10, 40, 50, 20};
    // call back 함수를 인자로 받는 정렬 함수
    qsort(aList, 5, sizeof(int), myCompare);
    for (int i = 0; i < 5; i++) {
        printf("%d\t", aList[i]);
    }
    return 0;
}