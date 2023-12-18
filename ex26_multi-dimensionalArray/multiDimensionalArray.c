#include <stdio.h>

int main() {
    int aList[5][5] = {0};
    int cnt = 0;
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            aList[i][j] = ++cnt;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
//            printf("aList[%d][%d] : %d\t", i, j, aList[i][j]);
            printf("%d\t", aList[i][j]);
        }
        printf("\r\n");
    }
    printf("\r\n");
    int bList[3][4] = {{10, 20, 30},
                       {40, 50, 60}};

    for (int i = 0; i < 3; i++) {
        int nResult = 0;
        for (int j = 0; j < 4; j++) {
            printf("%d\t", bList[i][j]);
            nResult += bList[i][j];
            if (j == 3) {
                bList[i][j] = nResult;
            }
        }
        printf("\r\n");
    }
    for (int j = 0; j < 4; j++) {
        int nResult = 0;
        for (int i = 0; i < 3; i++) {
            nResult += bList[i][j];
            if (i == 2) {
                bList[i][j] = nResult;
            }
        }

    }
    printf("\r\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d\t", bList[i][j]);
        }
        printf("\r\n");
    }
    printf("\r\n");
    return 0;
}