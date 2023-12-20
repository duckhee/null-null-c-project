#include <stdio.h>

int main() {
    int forResult = 0;
    int whileResult = 0;
    int count = 0;

    for (int i = 1; i <= 10; i++) {
        forResult += i;
    }
    printf("for result : %d\r\n", forResult);
    while (count <= 10) {
        whileResult += count;
        ++count;
    }
    printf("while result : %d\r\n", whileResult);
    return 0;
}