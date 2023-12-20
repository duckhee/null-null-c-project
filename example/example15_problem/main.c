#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("* ");
        }
        printf("\r\n");
    }
    printf("\r\n");
    for (int i = 4; i >= 0; i--) {
        for (int j = 0; j < (5 - i); j++) {
            printf("* ");
        }
        printf("\r\n");
    }
    printf("\r\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < (i + 1); j++) {
            printf("* ");
        }
        printf("\r\n");
    }
    return 0;
}