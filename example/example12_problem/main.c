#include <stdio.h>

int main() {
    int nAge = 0;
    printf("나이를 입력하세요 : ");
    scanf("%d", &nAge);
    // 중간 값으로 분기
    if (nAge > 13) {
        if (nAge < 19) {
            printf("청소년 입니다. 가격은 %d원 입니다.", (int)(1000 * 0.75));
        } else {
            printf("성인 입니다. 가격은 %d원 입니다.", (int)(1000));
        }
    } else {
        if (nAge <= 3) {
            printf("영유아 입니다. 가격은 %d원 입니다.", (int)(0));
        } else {
            printf("어린이 입니다. 가격은 %d원 입니다.", (int)(1000 * 0.5));
        }
    }
    return 0;
}
