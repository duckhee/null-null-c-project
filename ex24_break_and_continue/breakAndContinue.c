#include <stdio.h>

int main() {
    char ch = '\0';
    while (1) {
        ch = getchar();
        if (ch == 'x') {
            break;
        }
        if (ch == 'q') {
            continue;
        }
        putchar(ch);
    }
    return 0;
}