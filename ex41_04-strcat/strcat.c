#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {
    char szPath[128] = {"C:\\Program Files\\"};
    // 문자열을 연결하는 함수
    strcat(szPath, "CHS\\");
    strcat(szPath, "C Programing");
    puts(szPath);
    // 문자열을 복사하는 함수
    strcpy(szPath, "C:\\Program Files\\");
    // szPath 시작 주소에 17만큼 떨어져 있는 주소 위치 부터 해당 문자열을 연결해서 더한다는 의미이다.
    strcat(szPath + 17, "CHS\\");
    strcat(szPath + 17 + 4, "C Programing");
    // strcat 을 이용한 것과 같은 효과를 가져온다. -> 문자열을 연결하기 위해서 현재 문자열에 써 있는 문자의 위치를 계산해서 쓸 위치에 복사를 해주는 효과가 있다.
//    strcpy(szPath + 17, "CHS\\");
//    strcpy(szPath + 17 + 4, "C Programing");
    puts(szPath);
    return 0;
}