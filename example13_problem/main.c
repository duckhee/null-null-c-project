#include <stdio.h>

int main() {
    int nInput = 0;
    int count = 0;
    printf("숫자를 입력하세요 : ");
    scanf("%d", &nInput);
    if(nInput < 1 || nInput > 10){
        puts("1 ~ 9 사이 정수를 입력하세요");
        return 0;
    }
//    printf("%d\r\n", nInput);
    while(count < nInput){
//    while (count != nInput) {
        printf("* ");
        ++count;
    }
    putchar('\r\n');
    return 0;
}