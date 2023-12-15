#include <stdio.h>

int main() {
    int nInput = -1;
    while (nInput < 0 || nInput > 10) {
        printf("Input number : ");
        scanf("%d", &nInput);
    }
    puts("END");
    return 0;
}
