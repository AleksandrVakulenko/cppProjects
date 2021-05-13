#include <iostream>

const int TABWIDTH = 8;

//TODO: just testing TODO message

void JustPrint(int arg){
    std::cout << "Data = " << arg << '\n';
}

template <class X> void tabOut(X data, int tab){
    if (tab<0) return;
    for(;tab;tab--) {
        for (int i = 0; i < TABWIDTH; i++){
            std::cout << ' ';
        }
    }
    std::cout << data << '\n';
}


int main() {
    std::cout.setf(std::ios::showpos);
    std::cout.setf(std::ios::scientific);

    std::cout << std::cout.flags() << "\n\n";
//    std::cout << '\n';

    tabOut("Проверка", 0);
    tabOut("Testing", 0);
    tabOut(100, 1);
    tabOut('X', 2);
    tabOut(10/3, 3);

    std::cout << std::hex << 100 << '\n';

    tabOut(10/3.0, 3);
    tabOut(11, -1);

    JustPrint(3);

    return 0;
}
