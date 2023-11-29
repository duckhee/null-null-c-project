#include <stdio.h>
#include <string.h>

int main() {
    // 이름을 입력 받아서 저장하기 위한 char 형 배열 선언
    char name[32] = {0};
    // 나이를 저장하기 위한 변수
    int age = 0;
    printf("나이를 입력하세요 : ");
    // 나이를 입력 받기 위한 scanf 함수 -> %d%*c 를 이용해서 남아 있는 문자인 \n 제거
    scanf("%d%*c", &age);
    // window 에서는 scanf_s()를 이용한다.
    // scanf_s("%d", &age, 1);
    // 입력 받은 값을 출력 하는 함수
    printf("이름을 입력하세요 : ");
    // 이름을 입력 받기 위한 fgets 사용
    fgets(name, sizeof(name), stdin);
    // window 에서는 gets_s()를 이용해서 사용한다.
    // gets_s(name, sizeof(name));
    // 개행 문자인 \n 제거
    name[strlen(name) - 1] = '\0';

    printf("당신의 나이는 %d살이고, 이름은 \'%s\' 입니다.\r\n", age, name);
    return 0;
}