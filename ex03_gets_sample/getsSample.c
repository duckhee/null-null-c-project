#include <stdio.h>


int main(void) {
    // 문자 배열에 초기화 및 선언
    char szName[32] = {0};
    printf("이름을 입력하세요 : ");
    gets(szName);
    // 윈도우에서 안전하게 사용할 수 있는 gets 함수의 보안 버전 함수
//    gets_s(szName);
    // 유닉스 시스텡에서 사용할 수 있는 gets 함수의 보안 버전 함수
//    fgets(szName, 32, stdin);
    printf("당신의 이름은 ");
    // puts 함수는 한줄 개행을 시켜준다.
    puts(szName);
    puts(" 입니다.");
    return 0;
}