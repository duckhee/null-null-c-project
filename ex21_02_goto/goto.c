#include <stdio.h>
#include <stdbool.h>

int main() {

    bool isA = false;
    bool isB = false;

    int nInput = 0;
    printf("is A start : ");
    scanf("%d", &nInput);

    if (nInput > 0) {
        isA = true;
    } else {
        goto CLEANUP;
    }

    printf("is B start : ");
    scanf("%d", &nInput);
    if (nInput > 0) {
        isB = true;
    } else {
        goto CLEANUP;
    }
    printf("isA : %d isB : %d\r\n", isA, isB);

    printf("isA : %d isB : %d\r\n", isA, isB);
    CLEANUP:
    {
        if (isA) isA = false;
        if (isB) isB = false;
    };
    return 0;
}

