#include <stdio.h>

int main(void) {
    int aList[5][5] = {0};
    int count = 0;
    int nRow = -1;
    int nCol = 0;
    int nDirection = 1;

    for (int nLength = 9; nLength > 0; nLength -= 2) {
        for (int i = 0; i < nLength; i++) {
            if (i < (nLength / 2) + 1) {
                nRow += nDirection;
            } else {
                nCol += nDirection;
            }
            aList[nCol][nRow] = ++count;
        }
        nDirection = -nDirection;
    }

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j)
            printf("%d\t", aList[i][j]);
        putchar('\n');
    }
    return 0;
}