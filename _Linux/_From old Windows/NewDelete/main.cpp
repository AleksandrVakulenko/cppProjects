#include <iostream>

long long NumberOfElements = 1000000000ull * 3ull;
double sizeMB;

int main() {
    std::cout << "Creating object ..." << std::endl;
    int *Data = new(std::nothrow) int[NumberOfElements];
    std::cout << "Created!" << std::endl;

    sizeMB = (double)sizeof(int) * (double)NumberOfElements / (1024.0 * 1024.0);
    std::cout << sizeMB << " MB" << std::endl;

    std::cout << "Data is nullptr? -> " << (int) (Data == nullptr) << std::endl;

    if (Data != nullptr) {
        for (unsigned long i = 0; i < NumberOfElements; i++) {
            Data[i] = i;//rand();
        }

        std::cout << "Deleting ..." << std::endl;
        delete[] Data;
        std::cout << "Deleted!" << std::endl;
    }

    return 0;
}
