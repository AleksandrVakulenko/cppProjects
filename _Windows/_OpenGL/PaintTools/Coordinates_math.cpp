//
// Created by Sasha705 on 23.05.2021.
//
#include "Coordinates.h"
#include <cmath>

using namespace Coordinates;

float Coordinates::range(const Coordinate &point1, const Coordinate &point2){
    float dX = point1.f_crd.X - point2.f_crd.X;
    float dY = point1.f_crd.Y - point2.f_crd.Y;
    return std::sqrt(dX * dX + dY * dY);
}

float Coordinates::range(const Coordinate &point) {
    float dX = point.f_crd.X;
    float dY = point.f_crd.Y;
    return std::sqrt(dX * dX + dY * dY);
}

Coordinate Coordinates::mid_point(const Coordinate &point1, const Coordinate &point2) {
    float newX = (point1.f_crd.X + point2.f_crd.X ) / 2;
    float newY = (point1.f_crd.Y + point2.f_crd.Y ) / 2;
    return Coordinate(newX, newY);
}

Coordinate Coordinates::mid_point(const Coordinate &point) {
    float newX = point.f_crd.X / 2;
    float newY = point.f_crd.Y / 2;
    return Coordinate(newX, newY);
}



