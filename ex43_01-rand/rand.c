#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // 랜덤 값을 초기화 하기 위한 함수 호출
    srand((unsigned) time(NULL));
    for(int i = 0; i < 10; i++){
        // 랜덤 값을 가져오기 위한 함수
        printf("%6d\r\n", rand());
    }
    for(int i = 0; i < 10; i++){
        // 랜덤 값에 대한 범위를 지정하기 위한 나머지 연산 진행
        printf("%6d\r\n", (rand() % 6));
    }
    return 0;
}
