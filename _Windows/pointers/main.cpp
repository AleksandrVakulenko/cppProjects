// passing function by pointer
#include <iostream>


int Framework(void (*argF)(int), int arg = 0){
    argF(arg);
    return 0;
}


class MyClass{
    static int Data;
public:
    MyClass(int arg){
        Data = arg;
    }
    ~MyClass(){
        std::cout << "MyClass destructor" << std::endl;
    }
    static void NumPrint(int Count);
};

void MyClass::NumPrint(int Count) {
    for(;Count;--Count){
        std::cout << Data << ' ';
    }
    std::cout << std::endl;
}


int MyClass::Data;


int main() {

    MyClass obj(9);
    obj.NumPrint(5);

    void (*p2f)(int) = &MyClass::NumPrint;
    void (*Fpointer)(int) = nullptr;

    Framework(p2f, 9);

    std::cout << std::endl;
    return 0;
}
