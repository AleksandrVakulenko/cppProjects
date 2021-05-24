//
// Created by User on 21.05.2021.
//

#ifndef PAINTTOOL_PAINTTOOLS_H
#define PAINTTOOL_PAINTTOOLS_H

#include <gl/gl.h>
#include <istream>
#include "Angles.h"
#include "Coordinates.h"


using namespace Coordinates;

struct Color {
   unsigned char R{0}, G{0}, B{0};
};

struct ColorFloat {
    float R{0}, G{0}, B{0};
};

class GraphicalObject {
public:
    GraphicalObject() {
        this->get_window_size();
    };

    virtual void draw() = 0;

    virtual void moveto(const Coordinate &new_center) = 0;
    virtual void moveto(int X, int Y) = 0;
    virtual void shiftby(const Coordinate &shift_value) = 0;
    virtual void shiftby(int X, int Y) = 0;

    virtual void rotate(const Angles::Angle &) = 0;


protected:
    void get_window_size();
    Coordinate window_size;
};


class Pixel : public GraphicalObject {
public:
    Pixel() = default;

    void draw() override {
        glPushMatrix();
        glLoadIdentity();

        //FIXME: scale to screen res---------
        float width = (float) window_size.i_crd.X;
        float height = (float) window_size.i_crd.Y;
        glScalef(2/width, 2/height, 1);
        glTranslatef(-width/2, -height/2, 0);
        //-----------------------------------

        glTranslatef(center.i_crd.X, center.i_crd.Y, 0);

        glBegin(GL_POINTS);
        glColor3f(color_float.R, color_float.G, color_float.B);
        glVertex2f(0, 0);
        glEnd();

        glPopMatrix();
    };

    void set_color(Color);

    void moveto(const Coordinate &new_center) override {
        this->center = new_center;
    }

    void moveto(int Xi, int Yi) override {
        this->center = Coordinate(Xi, Yi);
    };

    void shiftby(const Coordinate &shift_value) override {
        this->center.move(shift_value);
    }

    void shiftby(int Xi, int Yi) override {
        this->center.move(Xi, Yi);
    }

    void rotate(const Angles::Angle &) override;

    Coordinate get_center();

private:
    Color color;
    ColorFloat color_float;
    Coordinate center;
    void color_convert();
};

#endif //PAINTTOOL_PAINTTOOLS_H
