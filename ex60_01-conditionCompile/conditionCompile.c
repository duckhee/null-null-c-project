#include <stdio.h>
#include <wchar.h>
#include <locale.h>

#ifndef _DEBUG
#define MODE_MESSAGE    "Debug Mode"
#else
#define MODE_MESSAGE    "Release Mode"
#endif

#define _MSG_TEST_

#ifdef _MSG_TEST_
#define MY_MSG  "I am a boy"
#else
#define MY_MSG  "You are a girl"
#endif

//#define MYUNICODE

#ifdef MYUNICODE
typedef wchar_t TCHAR;
#define _T(string)  L##string
#define PRINT wprintf
#else
typedef char TCHAR;
#define _T(string)  string
#define PRINT printf
#endif

int main() {
    // unicode 에 대한 설정
    setlocale(LC_ALL,"");

    puts(MODE_MESSAGE);
    TCHAR szData[32] = _T("Test String 한글");
//    wprintf(L"%s\r\n", "한글 테스트");
    PRINT(_T("%s\n"), szData);
    // unicode 일때는 대문자 s 를 써야한다.
//    PRINT(_T("%S\n"), szData);
    PRINT(_T("%zd, %zd\r\n"), sizeof(TCHAR), sizeof(szData));
    return 0;
}