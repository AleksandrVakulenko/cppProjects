// testing errors AND file opening and copy

#include <iostream>
#include <string>
#include <fstream>

class Game {
public:
    Game() : Data{10} {}

    explicit Game(int arg) : Data{arg} {}

    class Error : public std::exception {
    public:
        explicit Error(int);

        int flag{0}; //null flag, just to use in Error obj in catch block
        std::string what(){ //remake what() function
            return "value of Game::Data is negative";
        }
    };

    void PrintData() const;

    void SetData(int);

private:
    int Data;
};

Game::Error::Error(int arg) {
    std::cerr << "inside Error(int); output: "
              << arg
              << " (printed in error stream)"
              << std::endl;
}


void Game::PrintData() const {
    if (Data < 0)
        throw Error(Data);
    std::cout << "Current value of Data: "
              << Data
              << std::endl;
}

void Game::SetData(int arg) {
    Data = arg;
}


int main() {

    {
        std::ifstream ifs{"file.txt"};
        std::ofstream ofs{"file2.txt"};

        char buf[100];
        while(!ifs.eof()) {
            ifs.getline(buf, 1000, '\n');
            std::cout << buf << std::endl;
        }


        ifs.clear();
        ifs.seekg(0);
        for(int C{0}; (C = ifs.get())!=-1;){
            ofs << (char) C;
        }
        std::cout << '\a';
    }


    //----------------------------------------------------------------------------
    std::cout << std::endl;
    std::cout << "Size of Game class: " << sizeof(Game) << " byte" << std::endl;

    Game obj{100};

    obj.PrintData();
    obj.SetData(2);
    obj.PrintData();
    obj.SetData(-2345);

    try {
        obj.PrintData();
    } catch (Game::Error &ErrorObject) {
        std::cout << "Error is caught!"
                  << " (printed in std stream)" << std::endl
                  << "ErrorObj.flag: " << ErrorObject.flag << " (stdvalue)" << std::endl
                  << "what(): " << ErrorObject.what() << std::endl;
        return -1;
    }


    return 0;
}

