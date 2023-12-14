#include <stdio.h>

int main() {
    int nInput = 0;
    char ch = 'A';
    printf("점수를 입력하세요 : ");
    scanf("%d", &nInput);

    if (nInput >= 90) {
        ch = 'A';
    } else if (nInput >= 80) {
        ch = 'B';
    } else if (nInput >= 70) {
        ch = 'C';
    } else if (nInput >= 60) {
        ch = 'D';
    } else {
        ch = 'F';
    }
    printf("점수는 %d 학점은 : %c\r\n", nInput, ch);
    return 0;
}