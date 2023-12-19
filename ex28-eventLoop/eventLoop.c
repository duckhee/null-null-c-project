#include <stdio.h>
//#include <windows.h>


int printMenu() {
    int nInput = 0;
    // window 에서 사용하는 것
//    system("cls");
    // console 화면을 지우는 linux 코드
    printf("\033c");
    printf("[1]New\t[2]Search\t[3]Print\t[4]Remove\t[0]Exit\r\n");
    scanf("%d%*c", &nInput);
    return nInput;
}

int getAge(void) {
    int nAge = 0;
    printf("나이를 입력하세요 : ");
    scanf("%d%*c", &nAge);
    return nAge;
}

int getFee(int age) {
    int nFee = 1000;
    if (age < 20) nFee /= 2;
    return nFee;
}

int main() {
    int nMenu = 0, nAge = 0;
    // event 루프 진행
    while ((nMenu = printMenu()) != 0) {
        switch(nMenu){
            case 1:
                nAge = getAge();
                printf("요금은 %d원입니다.\r\n", getFee(nAge));
                // 대기를 하기 위한 getchar()
                getchar();
                break;
            case 0:
                break;
        }
        // while 탈출을 진행하기 위한 if 문
        if (nMenu == 0) {
            break;
        }
    }
    puts("Bye ~~ ");
    return 0;
}