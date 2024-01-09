#include <stdio.h>

typedef enum _Action {
    MOVE,
    JUMP,
    ATTACK,
    QUIT
} Action;

int DoMove(int nParam) {
    puts("DoMove");
    return 0;
}

int DoJump(int nParam) {
    puts("DoJump");
    return 0;
}

int DoAttack(int nParam) {
    puts("DoAttack");
    return 0;
}

Action GetInputFromClient() {
    // TODO
    return MOVE;
}

int main() {
    // 함수 포인터의 배열 선언
    int (*functionArray[3])(int) = {DoMove, DoJump, DoAttack};

    Action act = 0;

    while ((act = GetInputFromClient()) != QUIT) {
        // 다음과 같은 형태로 Lookup Table 이다.
        // 빠른 속도로 대응이 가능하다.
        functionArray[act](0);
        /*
         switch (act) {
            case MOVE:
                functionArray[MOVE](0);
                break;
            case JUMP:
                functionArray[JUMP](0);
                break;
            case ATTACK:
                functionArray[ATTACK](0);
                break;
            default:
                break;
        }
         */
    }
    return 0;
}