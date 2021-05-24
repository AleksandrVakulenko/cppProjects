//
// Created by Sasha705 on 23.05.2021.
//

#include "Angles.h"
#include <cmath>


using namespace Angles;

float Angles::sin(const Angle &in_angle) {
    float temp;
    if (in_angle.angle_type == Angle_type::degrees){
        temp = in_angle.convert(Angle_type::radian).angle;
    } else {
        temp = in_angle.angle;
    }
    return std::sin(temp);
}

float Angles::cos(const Angle &in_angle) {
    float temp;
    if (in_angle.angle_type == Angle_type::degrees){
        temp = in_angle.convert(Angle_type::radian).angle;
    } else {
        temp = in_angle.angle;
    }
    return std::cos(temp);
}

float Angles::tan(const Angle &in_angle) {
    float temp;
    if (in_angle.angle_type == Angle_type::degrees){
        temp = in_angle.convert(Angle_type::radian).angle;
    } else {
        temp = in_angle.angle;
    }
    return std::tan(temp);
}

