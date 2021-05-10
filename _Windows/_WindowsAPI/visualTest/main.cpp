#include <iostream>
#include "windows.h"
#include "gl/gl.h"


using std::cin;
using std::cout;
//#define _WIN32_WINNT 0x0A00


int main() {
    //HWND hwnd = GetConsoleWindow();
    HWND hwnd = GetDesktopWindow();
    HDC dc = GetDC(hwnd);

    SelectObject(dc, GetStockObject(DC_BRUSH));
    SetDCBrushColor(dc,RGB(255,0,255));
    Rectangle(dc, 10, 10, 110, 110);

    char A;
    cin >> A;
//    getchar();
    //system("pause");
    return 0;
}
