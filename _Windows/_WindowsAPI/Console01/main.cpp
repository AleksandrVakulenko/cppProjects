#include <iostream>
#include <windows.h>


char A[8] = {'|', '/', '-', '\\', '|', '/', '-', '\\'};

int main() {


    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),{0,0});
    std::cout << "---------";

    int k = 0;
    while(1) {
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), {0, 2});
        std::cout << A[k] << std::endl;
        Sleep(100);
        k++;
        if (k == 8) k = 0;
    }

    int nulldata;
    std::cin >> nulldata;
    return 0;
}
