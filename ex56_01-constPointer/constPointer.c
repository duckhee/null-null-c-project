#include <stdio.h>

// 매개변수를 읽기 용도로만 사용하기 위한 매개변수 선언
void constPrint(const char *pData) {
    puts(pData);
}

int main() {
    int nData = 10;
    const char szData[32] = "Hello world";
    // pointer 앞에 const 를 선언을 하면, 포인터가 가르키는 대상 메모리가 상수가 된다.
    const int *pnData = &nData;
    // 포인터 식별자 뒤에 const 를 선언하면, 변수가 상수가 되기 때문에 단순 대입을 할수가 없게 된다.
    int *const pnNewData = &nData;
    constPrint(szData);
//    *pnData = 20;
//    pnData = pnNewData;
//    pnNewData = NULL;
    return 0;
}
