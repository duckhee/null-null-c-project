#include <stdio.h>

// 값을 입력해주지 않으면, 맨 처음에 나오는 값은 0으로 초기화 되고, 다음 값은 1씩 커진다.
enum Action {
    MOVE,
    JUMP,
    ATTACK
};

typedef enum _COLOR {
    RED = 100,
    GREEN,
    BLUE
} Color;

typedef unsigned int UINT;
// 포인터 변수를 형재선언을 한 경우
typedef const char *LPSTR;

// 타입 재선언을 하지 않으면 매개변수를 다음과 같이 작성을 해줘야 된다.
void doAction(enum Action act) {
    switch (act) {
        case MOVE:
            break;
        case JUMP:
            break;
        case ATTACK:
            break;
        default:
            break;
    }
}

int main() {
    enum Action act = MOVE;
    Color color = GREEN;

    printf("Action : %d, Color : %d\r\n", act, color);
    UINT uData = 10;
    printf("%d\r\n", uData);
    // 자료형 재정의로 인해서 값을 파악하는데 시간이 걸린다.
    LPSTR pszData = NULL;
    pszData = "HelloWorld";
    printf("%s\r\n", pszData);

    return 0;
}