#define _WIN32_WINNT 0x0500
#define WINVER 0x0500
#define WIN32_LEAN_AND_MEAN
#define NTDDI_VERSION 0x05000000

#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main()
{
    HANDLE hStdin = GetStdHandle(STD_INPUT_HANDLE); 
    DWORD mode = 0;
    GetConsoleMode(hStdin, &mode);
    SetConsoleMode(hStdin, mode & (~ENABLE_ECHO_INPUT));

    string s;
    getline(cin, s);

    cout << s << endl;
    return 0;
}