#include <iostream>
#include <string>

std::string Data1, Data2;

int main() {
    std::cout << "Enter data N1: ";
    std::cin >> Data1;
    //std::cin.ignore(32767, '\n'); // удаляем символ новой строки из входного потока данных
    std::cout << std::endl;

    std::cout << "Enter data N2: ";
    std::cin >> Data2;
    //std::cin.ignore(32767, '\n'); // удаляем символ новой строки из входного потока данных
    std::cout << std::endl;

    std::cout << Data1 << std::endl;
    std::cout << Data2 << std::endl;

    return 0;
}
