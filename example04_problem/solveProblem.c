#include <stdio.h>

int main() {
    int a = 0, b = 0, tmp = 0;

    scanf("%d%d", &a, &b);
    printf("A : %d B : %d\r\n", a, b);
    tmp = a;
    a = b;
    b = tmp;
    printf("A : %d B : %d\r\n", a, b);
    return 0;
}