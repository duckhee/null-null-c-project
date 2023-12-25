#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    char szCommand[512] = {0};
    char ch;
    printf("Input command : ");
    fgets(szCommand, sizeof(szCommand), stdin);
//    gets_s(szCommand, sizeof(szCommand));
    // 외부에서 입력을 받아 프로그램을 실행을 시키게 되면, 신중하게 사용을 해야한다. 잘못하면, 보안 사고로 연결될 수 있다.
    system(szCommand);
    printf("call : %s\r\n", szCommand);
    printf("Do you want to EXIT (Y/N)\r\n");
    ch = getc(stdin);
    if (ch == 'Y' || ch == 'y') {
        puts("EXIT");
        // 정상 종료 하는 함수 -> 즉시 종료된다.
        exit(1);
    }
    puts("End of main()");
    return 0;
}