//Dr_T Color in Non-Windows Platforms ANSI technique 9-1-2019
//source: https://stackoverflow.com/questions/20608058/c-colour-console-text
//using https://en.wikipedia.org/wiki/ANSI_escape_code

#include <iostream>
using namespace std; 

int main()
{
    cout << "\x1b[32;1mHello\x1b[0m\n C or C = Area of Circle";
    cout << "\x1b[31;1mBye\x1b[0m\n";
}