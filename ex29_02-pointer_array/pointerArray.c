#include <stdio.h>

int main() {
    int aList[5] = {0};
    int *pnData = aList;
    // int *pnData = &aList[0];
    printf("aList[0] : %d\r\n", aList[0]);
    // 간접 지정을 이용해서 값을 변경하는 것
    *pnData = 20;
    printf("aList[0] : %d\r\n", aList[0]);
    // 포인터를 이용해서 배열의 값을 가져오는 것
    printf("pnData[0] : %d\r\n", pnData[0]);
    return 0;
}