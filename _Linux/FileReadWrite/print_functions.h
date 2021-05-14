//
// Created by user on 14.05.2021.
//

#ifndef FILEREADWRITE_PRINT_FUNCTIONS_H
#define FILEREADWRITE_PRINT_FUNCTIONS_H

template<class X>
void print(X arg_to_print) {
    std::cout << arg_to_print
              << std::endl;
}

template<class X, class Y>
void print(X arg1_to_print, Y arg2_to_print) {
    std::cout << "A = " << arg1_to_print
              << ' '
              << "B = " << arg2_to_print
              << std::endl;
}

#endif //FILEREADWRITE_PRINT_FUNCTIONS_H
