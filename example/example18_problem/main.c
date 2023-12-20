#include <stdio.h>

int main() {
    int aList[5] = {3, 5, 1, 4, 2};
    for (int i = 0; i < 5; i++) {
        printf("%d\t", aList[i]);
    }
    printf("\r\n");
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (aList[i] > aList[j]) {
                int temp = aList[j];
                aList[j] = aList[i];
                aList[i] = temp;
            }
        }
    }

//    for (int i = 0; i < 5; i++) {
//        for (int j = i; j < 5; j++) {
//            if (aList[i] > aList[j]) {
//                int temp = aList[i];
//                aList[i] = aList[j];
//                aList[j] = temp;
//            }
//        }
//    }
    for (int i = 0; i < 5; i++) {
        printf("%d\t", aList[i]);
    }
    printf("\r\n");
    return 0;
}