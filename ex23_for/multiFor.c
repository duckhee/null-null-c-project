#include <stdio.h>

int main() {
    for (int i = 2; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            printf("%d * %d = %d\r\n", i, j, (i * j));
        }
        printf("\r\n");
    }
    return 0;
}