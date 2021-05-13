#include <iostream>
#include "Building_window.h"


int ConvertWindowPartToInt(WindowPart &wp){
    return wp.Data;
}


int main() {
    std::cout << "OK!" << std::endl;

    Window A;
    std::cout << "Window part Data = " << ConvertWindowPartToInt( A.GetPart() ) << std::endl;

    return 0;
}
