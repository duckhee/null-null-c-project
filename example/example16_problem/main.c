#include <stdio.h>

int main(int argc, char **argv) {
    for (int i = 4; i >= 0; i--) {
        for (int j = 0; j < 5; j++) {
            if ((i - j) > 0) {
                printf("\t");
            } else {
                printf("*\t");
            }
        }
        printf("\r\n");
    }
    printf("\r\n");

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if ((i + j) >= 4) {
                printf("*\t");
            } else {
                printf("\t");
            }
        }
        printf("\r\n");
    }
    printf("\r\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5 + i; j++) {
            if ((i + j) >= 4) {
                printf("*\t");
            } else {
                printf("\t");
            }
        }
        printf("\r\n");
    }
    printf("\r\n");
    return 0;
}