#ifndef BUILDINGPRJ_BUILDING_WINDOW_H
#define BUILDINGPRJ_BUILDING_WINDOW_H

class WindowPart {
public:
    //constructor
    explicit WindowPart(int arg) {
        Data = arg;
        std::cout << "create Window Part by copy constructor Data = " << Data << std::endl;
    }

    //copy constructor
    WindowPart(const WindowPart &copyfrom) {
        Data = copyfrom.Data + 1;
        std::cout << "create Window Part by copy constructor Data = " << Data << std::endl;
    };

    ~WindowPart() {
        std::cout << "delete Window Part inside Window! Data = " << Data << std::endl;
    }

    int Data = 0;
};


class Window {
public:
    //constructor (allocate memory)
    Window() {
        TopPart = new WindowPart(1);
        MidPart = new WindowPart(2);
        BotPart = new WindowPart(3);
        std::cout << "create Window!" << std::endl;
    }

    //Mid part getter
    WindowPart& GetPart() {
        return *MidPart;
    }

    //destructor (free memory)
    ~Window() {
        delete TopPart;
        delete MidPart;
        delete BotPart;
        std::cout << "delete Window!" << std::endl;
    }

private:
    WindowPart *TopPart;
    WindowPart *MidPart;
    WindowPart *BotPart;
};


#endif //BUILDINGPRJ_BUILDING_WINDOW_H
