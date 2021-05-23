//
// Created by User on 21.05.2021.
//
#include "Angles.h"

using namespace Angles;

Angle::Angle() {
    this->limit.high = 360;
    this->angle = 0;
    this->angle_type = Angle_type::degrees;
}

Angle::Angle(float angle) {
    this->limit.high = 360;
    this->angle = check(angle);
    this->angle_type = Angle_type::degrees;
}

Angle::Angle(float angle, Angle_type in_type) {
    if (in_type == Angle_type::degrees) {
        this->limit.high = 360;
        this->angle = check(angle);
        this->angle_type = Angle_type::degrees;
    } else {
        this->limit.high = 2 * PI;
        this->angle = check(angle);
        this->angle_type = Angle_type::radian;
    }
}

Angle::Angle(const Angle &input) {
        this->angle = input.angle;
        this->limit = input.limit;
        this->angle_type = input.angle_type;
    }


Angle& Angle::operator=(const Angle &input) {
    this->angle = input.angle;
    this->limit = input.limit;
    return *this;
}

//Angle& Angle::operator=(const float& input_float){
//    this->angle = input_float;
//    return *this;
//}

Angle& Angle::operator+=(const Angle& input){
    if (input.angle_type != this->angle_type){
        this->angle += convert(input, this->angle_type).angle;
    } else {
        this->angle += input.angle;
    }
    this->angle = check(this->angle);
    return *this;
}

Angle& Angle::operator-=(const Angle& input){
    if (input.angle_type != this->angle_type){
        this->angle -= convert(input, this->angle_type).angle;
    } else {
        this->angle -= input.angle;
    }
    this->angle = check(this->angle);
    return *this;
}

Angle & Angle::operator/=(float input) {
    if (input == 0) {
        throw Div_by_zero("in Angle::operator/");
    }
    this->angle = check(this->angle / input);
    return *this;
}

Angle Angle::operator+(const Angle& input) {
    Angle temp(*this);
    if (input.angle_type != temp.angle_type){
        temp.angle += convert(input, temp.angle_type).angle;
    } else {
        temp.angle += input.angle;
    }
    return temp;
}

Angle Angle::operator-(const Angle &input) {
    Angle temp(*this);
    temp.angle = check(this->angle - input.angle);
    return temp;
}

Angle Angle::operator/(const float &input) {
    if (input == 0) {
        throw Div_by_zero("in Angle::operator/");
    }
    Angle temp(*this);
    temp.angle = check(this->angle / input);
    return temp;
}

float Angle::check(float arg) const { //FIXME: remake!
    while (arg < limit.low)
        arg += limit.high;
    while (arg >= limit.high)
        arg -= limit.high;
    return arg;
}

void Angle::print() {
    std::string type_string;
    if (this->angle_type == Angle_type::degrees) {
        type_string = "deg";
    } else {
        type_string = "rad";
    }
    std::cout << this->angle << ' ' << type_string << std::endl;
}


Angle Angle::convert(const Angle &input, Angle_type to_at) {
    Angle temp{0};
    if (to_at == Angle_type::degrees){
        temp.angle_type = Angle_type::degrees;
        temp.limit.high = 360;
        temp.angle = input.angle / PI * 180;
    } else {
        temp.angle_type = Angle_type::radian;
        temp.limit.high = 2 * PI;
        temp.angle = input.angle / 180 * PI;
    }
    return temp;
}


