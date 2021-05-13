#include <iostream>

void recfunc();


int main() {
    std::cout << "Hello, World!" << std::endl;
    recfunc();
    return 0;
}


void recfunc(){
    static int Count = 0;
    ++Count;
    std::cout << Count << std::endl;
    if (Count) {
        recfunc();
    }
    return;
}