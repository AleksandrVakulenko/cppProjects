//
// Created by Sasha705 on 24.05.2021.
//

#include "PaintTools.h"
//#include <windows.h>

void GraphicalObject::get_window_size() {
    int width = GetSystemMetrics(SM_CXFULLSCREEN);
    int height = GetSystemMetrics(SM_CYFULLSCREEN);

    this->window_size.i_crd.X = width;
    this->window_size.i_crd.Y = height;
}


void Pixel::set_color(Color in_color) {
    this->color = in_color;
    this->color_convert();
}

void Pixel::color_convert() {
    color_float.R = ( (float) this->color.R ) / 255.0;
    color_float.G = ( (float) this->color.G ) / 255.0;
    color_float.B = ( (float) this->color.B ) / 255.0;
}

void Pixel::rotate(const Angles::Angle &angle) {
    this->center.rotate(angle);
}

Coordinate Pixel::get_center() {
    return center;
}
