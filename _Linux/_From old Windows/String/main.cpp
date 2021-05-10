#include <iostream>
#include <string>


enum enList {
    Nyan = 1,
    Meow = 3,
    khhh
};


int main() {
    std::cout << "Pick 1 or 2: " << std::endl;
    int choice;
    std::cin >> choice;

    std::cin.ignore(32767, '\n'); // удаляем символ новой строки из входного потока данных

    std::cout << "Now enter your name: ";
    std::string myName;
    std::getline(std::cin, myName);

    std::cout << "Hello, " << myName << ", you picked " << choice << '\n';
    std::cout << myName.length() << std::endl;
    ////////////////////////////////
    std::cout << std::endl;

    enList testlist;
    testlist = khhh;

    std::cout << testlist << std::endl;


    return 0;
}