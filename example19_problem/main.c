#include <stdio.h>

int main() {
    int aList[5] = {30, 20, 50, 10, 40};
    int idxMin = 0;
    printf("list : ");
    for (int i = 0; i < 5; i++) {
        printf("%d\t", aList[i]);
    }
    printf("\r\n");

    printf("sort : ");
    for (int i = 0; i < 4; i++) {
        idxMin = i;
        for (int j = i + 1; j < 5; j++) {
            if (aList[idxMin] > aList[j]) {
                idxMin = j;
            }
        }
        // bubble 정렬과 다른 점은 즉시 하지 않고, 나중에 교한을 진행을 하는 것
        if (idxMin != i) {
            int temp = aList[idxMin];
            aList[idxMin] = aList[i];
            aList[i] = temp;
        }

    }
    for (int i = 0; i < 5; i++) {
        printf("%d\t", aList[i]);
    }
    printf("\r\n");
    return 0;
}