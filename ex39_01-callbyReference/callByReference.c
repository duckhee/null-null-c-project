#include <stdio.h>
#include <stdlib.h>

void swap(int *pLeft, int *pRight) {
    int temp = *pLeft;
    *pLeft = *pRight;
    *pRight = temp;
}

int main(int argc, char **argv) {
    int x = 10, y = 20;
    printf("x = %d, y = %d\r\n", x, y);
    swap(&x, &y);
    printf("x = %d, y = %d\r\n", x, y);
    return 0;
}