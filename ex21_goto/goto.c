#include <stdio.h>

int main() {
    int nInput = 0;

    INPUT:
    printf("Input Number : ");
    scanf("%d", &nInput);

    if (nInput > 0 && nInput < 10) {
        goto INPUT;
    }
    puts("END\r\n");
    return 0;
}