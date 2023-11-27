#include <stdio.h>

int main() {
    int x = 0;

    putchar('B');
    putchar('\n');
    printf("%c\r\n", 'A');
    printf("x는 %d 입니다. \r\n", x);
//    printf("x는 %g 입니다. \r\n", x);
    return 0;
}