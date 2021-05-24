//
// Created by Sasha705 on 23.05.2021.
//

#ifndef PAINTTOOL_COORDINATES_H
#define PAINTTOOL_COORDINATES_H

#include <cmath>
#include "Angles.h"

namespace Coordinates {
    class Coordinate;
    float range(const Coordinate &, const Coordinate &);
    float range(const Coordinate &);
    Coordinate mid_point(const Coordinate &, const Coordinate &);
    Coordinate mid_point(const Coordinate &);
}


class float_crd {
public:
    float_crd();

    float_crd(double inXd, double inYd);

    float_crd(float inXf, float inYf);

    float_crd(int inXi, int inYi);

    float_crd operator+(const float_crd &) const;

    float_crd operator-(const float_crd &) const;

    float_crd & operator+=(const float_crd&);

    float_crd & operator-=(const float_crd&);

    float_crd & operator-();


    float X;
    float Y;
};


class int_crd {
public:
    int_crd();

    int_crd(double inXd, double inYd);

    int_crd(float inXf, float inYf);

    int_crd(int inXi, int inYi);

    int_crd operator+(const int_crd &) const;

    int_crd operator-(const int_crd &) const;


    int X;
    int Y;
};


class Coordinates::Coordinate {
public:

    Coordinate();

    Coordinate(const Coordinate &);

    Coordinate(float_crd);

    Coordinate(int_crd);

    Coordinate(double, double);

    Coordinate(float, float);

    Coordinate(int, int);

    Coordinate &operator+=(const Coordinate &input);

    Coordinate &operator-=(const Coordinate &input);

    Coordinate operator+(const Coordinate &input);

    Coordinate operator-(const Coordinate &input);

    Coordinate& scale(float k);
    Coordinate& scale(double k);
    Coordinate& scale(int k);

    Coordinate& move(float dXf, float dYf);
    Coordinate& move(double dXd, double dYd);
    Coordinate& move(int dXi, int dYi);
    Coordinate& move(const Coordinate &);

    void rotate(const Angles::Angle &);

    float_crd f_crd;
    int_crd i_crd;

private:
    void round();
};


#endif //PAINTTOOL_COORDINATES_H
