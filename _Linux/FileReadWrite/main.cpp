// binary write read operations with files
// by using a simple union structure
#include <iostream>
#include <fstream>
#include <string>
#include "print_functions.h"

class data_struct {
public:
    data_struct() = default;

    data_struct(const data_struct &arg) {
        this->A = arg.A;
        this->B = arg.B;
    };

    data_struct& operator=(const data_struct &arg) {
        this->A = arg.A;
        this->B = arg.B;
        return *this;
    }

    friend data_struct& operator+(data_struct &argLeft, const data_struct argRight){
        print("plus here!");
        argLeft.A += argRight.A;
        argLeft.B += argRight.B;
    }

    void write_to_file(const std::string &filename) const;

    void direct_write_to_file(const std::string &filename) const;

    void read_from_file(const std::string &filename);

    void direct_read_from_file(const std::string &filename);

    void get() const {
        print(A, B);
    }

    void set(int inA, int inB) {
        A = inA;
        B = inB;
    }

private:
    int A{0}, B{0};
};

void data_struct::write_to_file(const std::string &filename) const {
    //write to file by union buffer converter
    union {
        char charbuf[8];
        struct {
            int outA;
            int outB;
        };
    } buf{};
    buf.outA = A;
    buf.outB = B;
    std::ofstream ofs{filename};
    ofs.write(buf.charbuf, 8);
    ofs << std::endl;
//    ofs << B;
}

void data_struct::direct_write_to_file(const std::string &filename) const {
    static const int byte_size = sizeof(data_struct);
    char *ds_ptr{(char *) this};
    std::ofstream ofs{filename};
    ofs.write(ds_ptr, byte_size);
    ofs << std::endl;
}

void data_struct::read_from_file(const std::string &filename) {
    //copy by converting by union buffer
    static const int byte_size = sizeof(data_struct);
    union {
        data_struct ds{};
        char byte_buffer[byte_size];
    } convert_buffer{};
    std::ifstream ifs{filename};
    ifs.get(convert_buffer.byte_buffer, byte_size);
    *this = convert_buffer.ds; //TODO: copy constructor for ds class;
}

void data_struct::direct_read_from_file(const std::string &filename) {
    //copy byte-to-byte in this*
    static const int byte_size = sizeof(data_struct);
    char *ds_ptr{(char *) this};
    std::ifstream ifs(filename);
    ifs.get(ds_ptr, byte_size);
}


int main() {
    print("1)init ds obj:");
    data_struct ds;
    ds.set(111, 2763142);
    ds.get();
    ds.write_to_file("testfile1");

    print("2)test read_from_file:");
    data_struct ds2;
    ds2.read_from_file("testfile1");
    ds2.get();

    print("3)test direct_read_from_file:");
    data_struct ds3;
    ds3.direct_read_from_file("testfile1");
    ds3.get();

    print(' ');
    print("4)init ds4 and test direct_write_to_file");
    data_struct ds4;
    ds4.set(999, 123);
    ds4.get();
    ds4.direct_write_to_file("testfile1");

    print("5)test result");
    data_struct ds5;
    ds5.direct_read_from_file("testfile1");
    ds5.get();

    print(2+4);
    data_struct ds6;
    ds6.set(1,22);
    (ds6+ds5).get();

    return 0;
}
