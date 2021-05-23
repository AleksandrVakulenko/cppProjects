//
// Created by User on 21.05.2021.
//
#include <iostream>
#include "Angles.h"
#include "PaintTools.h"

using namespace Angles;

int main(int argc, char *argv[]) {

//    Coordinate point{10, 10};
//    Coordinate_Float help_coord{0, 0};
//
//    Floating_Coordinate fc;
//
//    fc.set_int(point.X, point.Y);
//    fc.float_coord.X += 0.1;
//    fc.float_coord.Y /= 4;
//
//    std::cout << fc.float_coord.X << ' '
//              << fc.float_coord.Y << ' '
//              << fc.int_coord.X << ' '
//              << fc.int_coord.Y << ' '
//              << std::endl;



    std::cout << "Start: " << std::endl;

    Angle ar(100);

    for (Angle add(0); add.angle <= 300; add += (Angle) 10) {
        try {
            std::cout << ar << ' '
                      << add << ' '
                      << ar + add << ' '
                      << ar - add << ' '
                      << ar / add.angle << ' '
                      << std::endl;
        } catch (Angle::Div_by_zero &err_obj) {
            std::cout << std::endl;
            std::cerr << err_obj.message << std::endl;
        }

    }

    std::cout << "NEW LINE: " << std::endl;

    Angle ang1(100, Angle_type::degrees);
    Angle ang2(Angle::PI/2, Angle_type::radian);
    ang1.print();
    ang2.print();
    (ang1+ang2).print();
    (ang2+ang1).print();

return 0;
}





