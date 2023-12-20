#include <stdio.h>

int main() {
    int score = 0;
    printf("점수를 입력하세요 : ");
    scanf("%d", &score);
    printf("%s\r\n", ((score >= 80) ? "합격" : "불합격"));
    return 0;
}