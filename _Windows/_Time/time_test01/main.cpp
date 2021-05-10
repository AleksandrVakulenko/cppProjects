#include <iostream>
#include <chrono>

void TimePrint(long long time);

int main() {
    ///////////////////
    auto t1 = std::chrono::high_resolution_clock::now();
    ///////////////////

    unsigned long long NumberOfElements = 1000000000llu;


    long long *p = new(std::nothrow) long long [NumberOfElements];

    if (p!= nullptr) {
        double sizeMB = (double) sizeof(long long) * (double) NumberOfElements / (1024.0 * 1024.0);
        std::cout
            << "Data size = "
            << sizeMB << " MB" << std::endl;

        for (int i = 0; i <= NumberOfElements; ++i) {
            p[i] = rand();
        }

        delete[] p;
    } else {
        std::cout << "Memory allocation error" << std::endl;
    }
    ///////////////////
    auto t2 = std::chrono::high_resolution_clock::now();
    ///////////////////

    long long Deltatime = std::chrono::duration_cast<std::chrono::microseconds>(t2-t1).count();
    TimePrint(Deltatime);


    return 0;
}





void TimePrint(long long time){
    double timef = (double) time;
    std::string unit;

    if (time<1000.0f){
        unit = " us";
    } else if (timef >= 1000.0f && timef < 1000000.0f){
        timef = timef/1000.0f;
        unit = " ms";
    } else {
        timef = timef/1e6f;
        unit = " s";
    }

    std::cout
            << "Time passed: "
            << timef << unit
            << std::endl;
}








