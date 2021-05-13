#include <iostream>


char string[] = "Hello, World!";



int main() {

    for (int i=0; string[i] != 0; ++i){
        std::cout << string[i];
    }
    std::cout << std::endl;


    for(char i = 0, c; (c = string[i++]) != 0; std::cout << c){

    }

    std::cout << (char) 7;

    char A;
    std::cin >> A;

    return 0;
}
