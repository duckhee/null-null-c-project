#include <stdio.h>

int main() {
    int aList[5][5] = {0};
    int count = 0;
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            aList[i][j] = ++count;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d\t", aList[i][j]);
        }
        printf("\r\n");
    }
    printf("\r\n");

    int bList[5][5] = {0};
    int nCount = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i % 2 == 1) {
                bList[i][4 - j] = ++nCount;
            } else {
                bList[i][j] = ++nCount;
            }
        }
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d\t", bList[i][j]);
        }
        printf("\r\n");
    }
    printf("\r\n");
    int cList[5][5] = {0};
    int rCount = 0;
    int flag = 1;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (flag) {
                cList[i][j] = ++rCount;

            } else {
                cList[i][4 - j] = ++rCount;
            }
        }
        flag = !flag;
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d\t", cList[i][j]);
        }
        printf("\r\n");
    }
    printf("\r\n");
    return 0;
}