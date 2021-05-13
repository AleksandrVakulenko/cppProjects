#include <iostream>
#include <fstream>
#include <string>

template <class X> void print(X arg_to_print){
    std::cout << arg_to_print
              << std::endl;
}

class data_struct {
public:
    data_struct() {};

    void writetofile(std::string filename);

    void readfromfile(std::string filename);

    void get() const {
        std::cout << "A = " << A
                  << " B = " << B
                  << std::endl;
    }

    void set(int inA, int inB) {
        A = inA;
        B = inB;
    }

private:
    int A{0}, B{0};
};

void data_struct::writetofile(std::string filename) {
    union {
        char charbuf[8];
        struct {
            int outA;
            int outB;
        };
    } buf;
    buf.outA = A;
    buf.outB = B;
    std::ofstream ofs{filename};
    ofs.write(buf.charbuf, 8);
    ofs << std::endl;
//    ofs << B;
}

void data_struct::readfromfile(std::string filename) {
    union {
        char charbuf[8];
        struct {
            int outA;
            int outB;
        };
    } buf;

    std::ifstream ifs{filename};
    ifs.get(buf.charbuf, 8);
    A = buf.outA;
    B = buf.outB;
}

//void data_struct::readfromfile(std::string filename) {
//    std::ifstream ifs{filename};
//    ifs >> A;
//    ifs >> B;
//}

int main() {
    data_struct ds;
    ds.set(111, 2763142);
    ds.get();

    ds.writetofile("testfile1");

    data_struct ds2;
    ds2.readfromfile("testfile1");
    ds2.get();

    const int N = sizeof(data_struct);
    print(N);
    union {
        data_struct ds{};
        char buf[N];
    } buffer;

    std::ifstream ifs("testfile1");
    ifs.get(buffer.buf, N);
    data_struct ds3;
    ds3 = buffer.ds;
    ds3.get();

    return 0;
}
