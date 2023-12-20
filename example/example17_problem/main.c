#include <stdio.h>

int main() {
//    int aList[5] = {0, 0, 0, 0, 0};
    int aList[5] = {50, 40, 10, 50, 20};
    int nMax = 0;
//    printf("숫자를 입력하세요 : ");
//    scanf("%d%d%d%d%d", &aList[0], &aList[1], &aList[2], &aList[3], &aList[4]);
    nMax = aList[0];
    for (int i = 1; i < 5; i++) {
        if (nMax < aList[i]) {
            nMax = aList[i];
        }
    }
//    for (int i = 0; i < 5; i++) {
//        if (nMax < aList[i]) {
//            nMax = aList[i];
//        }
//    }
    printf("MAX : %d\r\n", nMax);
    int bList[5] = {50, 40, 10, 50, 20};
    for (int i = 1; i < 5; i++) {
        if (bList[i] < bList[0]) {
            int temp;
            temp = bList[0];
            bList[0] = bList[i];
            bList[i] = temp;
        }
    }
    for (int i = 0; i < 5; i++) {
        printf("%d\t", bList[i]);
    }
    putchar('\r\n');
    return 0;
}