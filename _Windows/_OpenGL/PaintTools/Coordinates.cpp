//
// Created by Sasha705 on 23.05.2021.
//

#include "Coordinates.h"

using namespace Coordinates;


float_crd::float_crd(){
    X = Y = 0;
}

float_crd::float_crd(double inXd, double inYd){
    X = (float) inXd;
    Y = (float) inYd;
}

float_crd::float_crd(float inXf, float inYf){
    X = inXf;
    Y = inYf;
}

float_crd::float_crd(int inXi, int inYi){
    X = (float) inXi;
    Y = (float) inYi;
}

float_crd float_crd::operator+(const float_crd & input) const {
    float_crd temp;
    temp.X = this->X + input.X;
    temp.Y = this->Y + input.Y;
    return temp;
}

float_crd float_crd::operator-(const float_crd & input) const {
    float_crd temp;
    temp.X = this->X - input.X;
    temp.Y = this->Y - input.Y;
    return temp;
}

float_crd & float_crd::operator+=(const float_crd &input) {
    this->X += input.X;
    this->Y += input.Y;
    return *this;
}

float_crd & float_crd::operator-=(const float_crd &input) {
    this->X -= input.X;
    this->Y -= input.Y;
    return *this;
}

float_crd & float_crd::operator-() {
    this->X = - this->X;
    this->Y = - this->Y;
    return *this;
}

int_crd::int_crd(){
    X = Y = 0;
}

int_crd::int_crd(double inXd, double inYd){
    X = (int) std::round(inXd);
    Y = (int) std::round(inYd);
}

int_crd::int_crd(float inXf, float inYf){
    X = (int) std::round(inXf);
    Y = (int) std::round(inYf);
}

int_crd::int_crd(int inXi, int inYi){
    X = inXi;
    Y = inYi;
}

int_crd int_crd::operator+(const int_crd &input) const {
    int_crd temp;
    temp.X = this->X + input.X;
    temp.Y = this->Y + input.Y;
    return temp;
}

int_crd int_crd::operator-(const int_crd &input) const {
    int_crd temp;
    temp.X = this->X - input.X;
    temp.Y = this->Y - input.Y;
    return temp;
}



Coordinate::Coordinate(){
    f_crd = {(float) 0.0, (float) 0.0};
    i_crd = {0, 0};
}

Coordinate::Coordinate(const Coordinate& input){
    f_crd = input.f_crd;
    i_crd = input.i_crd;
}

Coordinate::Coordinate(float_crd in_float_crd){
    f_crd = in_float_crd;
    i_crd = int_crd(in_float_crd.X, in_float_crd.Y);
}

Coordinate::Coordinate(int_crd in_int_crd){
    f_crd = float_crd(in_int_crd.X, in_int_crd.Y);
    i_crd = in_int_crd;
}

Coordinate::Coordinate(double inXd, double inYd){
    f_crd = float_crd((float) inXd, (float) inYd);
    i_crd = int_crd((float) inXd, (float)  inYd);
}

Coordinate::Coordinate(float inXf, float inYf){
    f_crd = float_crd(inXf, inYf);
    i_crd = int_crd(inXf, inYf);
}

Coordinate::Coordinate(int inXi, int inYi){
    f_crd = float_crd(inXi, inYi);
    i_crd = int_crd(inXi, inYi);
}


void Coordinate::round() {
    this->i_crd.X = (int) std::round(this->f_crd.X);
    this->i_crd.Y = (int) std::round(this->f_crd.Y);
}

Coordinate & Coordinate::operator+=(const Coordinate &input) {
    this->f_crd = this->f_crd + input.f_crd;
    this->round();
    return *this;
}

Coordinate & Coordinate::operator-=(const Coordinate &input){
    this->f_crd = this->f_crd - input.f_crd;
    this->round();
    return *this;
}

Coordinate Coordinate::operator+(const Coordinate &input){
    Coordinate temp;
    temp.f_crd = this->f_crd + input.f_crd;
    temp.round();
    return temp;
}

Coordinate Coordinate::operator-(const Coordinate &input){
    Coordinate temp;
    temp.f_crd = this->f_crd - input.f_crd;
    temp.round();
    return temp;
}

Coordinate &Coordinate::scale(float k) {
    this->f_crd.X *= k;
    this->f_crd.Y *= k;
    this->round();
    return *this;
}

Coordinate &Coordinate::scale(double k) {
    return this->scale((float) k);
}

Coordinate &Coordinate::scale(int k) {
    return this->scale((float) k);
}

Coordinate &Coordinate::move(float dXf, float dYf) {
    this->f_crd += float_crd(dXf, dYf);
    this->round();
    return *this;
}

Coordinate &Coordinate::move(double dXd, double dYd) {
    return this->move((float)dXd, (float) dYd);
}

Coordinate &Coordinate::move(int dXi, int dYi) {
    return this->move((float) dXi, (float) dYi);
}

Coordinate & Coordinate::move(const Coordinate &input) {
    this->f_crd += input.f_crd;
    this->round();
    return *this;
}

void Coordinate::rotate(const Angles::Angle &angle) {

    float newX =
            this->f_crd.X * Angles::cos(angle) -
            this->f_crd.Y * Angles::sin(angle);

    float newY =
            this->f_crd.X * Angles::sin(angle) +
            this->f_crd.Y * Angles::cos(angle);

    this->f_crd = float_crd(newX, newY);
    this->round();
}




