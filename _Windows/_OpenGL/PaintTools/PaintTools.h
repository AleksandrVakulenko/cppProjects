//
// Created by User on 21.05.2021.
//

#ifndef PAINTTOOL_PAINTTOOLS_H
#define PAINTTOOL_PAINTTOOLS_H

#include "Angles.h"
#include <istream>
#include <cmath>

//todo: remake Coordinate clases!

class Coordinate {
public:
    Coordinate(){}
    Coordinate(int inX, int inY){
        X = inX;
        Y = inY;
    }
    int X{0}, Y{0};
};

class Coordinate_Float {
public:
    Coordinate_Float(){}
    Coordinate_Float(float inX, float inY){
        X = inX;
        Y = inY;
    }
    float X{0}, Y{0};
};

class Floating_Coordinate {
public:
    Floating_Coordinate(){
        int_coord.X = 0;
        int_coord.Y = 0;
        float_coord.X = 0.0;
        float_coord.Y = 0.0;
    }
    Floating_Coordinate(float X, float Y){
        int_coord.X = (int) std::roundf(X);
        int_coord.Y = (int) std::roundf(Y);
        float_coord.X = X;
        float_coord.Y = Y;
    }
    Floating_Coordinate(int X, int Y){
        int_coord.X = X;
        int_coord.Y = Y;
        float_coord.X = (float) X;
        float_coord.Y = (float) Y;
    }

    void set_float(float X, float Y){
        int_coord.X = (int) std::roundf(X);
        int_coord.Y = (int) std::roundf(Y);
        float_coord.X = X;
        float_coord.Y = Y;
    }

    void set_int(int X, int Y){
        int_coord.X = X;
        int_coord.Y = Y;
        float_coord.X = (float) X;
        float_coord.Y = (float) Y;
    }

    Coordinate get_int() const{
        return int_coord;
    }

    Coordinate_Float get_float() const{
        return float_coord;
    }

    Coordinate int_coord;
    Coordinate_Float float_coord;
};

struct Color {
    char R{0}, G{0}, B{0};
};

class GraphicalObject {
public:
    GraphicalObject() {
        window_size = get_window_size();
    };

    virtual void draw() = 0;
    virtual void redraw(); //fixme: maybe _unused

    virtual void moveto(const Coordinate &new_center) = 0;
    virtual void moveto(int X, int Y) = 0;
    virtual void shiftby(const Coordinate &shift_value) = 0;
    virtual void shiftby(int X, int Y) = 0;

    virtual void rotate(Angles::Angle angle);

private:
    Coordinate get_window_size();

    static Coordinate window_size;
};


class Pixel : public GraphicalObject {
public:
    Pixel() = default;

    void draw() override {
        //FIXME: add code
    };

    void moveto(const Coordinate &new_center) override {
        this->center = new_center;
    }

    void moveto(int X, int Y) override {
        this->center.X = X;
        this->center.Y = Y;
    };

    void shiftby(const Coordinate &shift_value) override {
        this->center.X += shift_value.X;
        this->center.Y += shift_value.Y;
    }

    void shiftby(int X, int Y) override {
        this->center.X += X;
        this->center.Y += Y;
    }

private:
    Coordinate center;
};

#endif //PAINTTOOL_PAINTTOOLS_H
