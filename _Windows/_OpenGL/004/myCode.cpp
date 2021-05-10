#include <gl/gl.h>
#include "myHeader.h"

double randomRange(double min, double max){
    double R = (double) (rand()%10000)/10000.0;
    R = R * (max - min);
    R = R + min;
    return R;
}

void Quad::QuadGenerate() {
    this->side = randomRange(0, 0.04);
    this->cenx = randomRange(-1, 1);
    this->ceny = randomRange(-1, 1);
    this->angle = randomRange(0, 360);
    this->color = {randomRange(0, 1),
                      randomRange(0, 1),
                      randomRange(0, 1)};
    this->angleinc = randomRange(-3, 3);
    this->rotaxis = {randomRange(-1, 1),
                        randomRange(-1, 1),
                        randomRange(-1, 1)};
}

void Quad::Rotate() {
    angle += angleinc;
}

void Quad::ShowQuad(){

    glPushMatrix();
    glLoadIdentity();
    glTranslatef(cenx, ceny, 0);
    glRotatef(angle, rotaxis.X, rotaxis.Y, rotaxis.Z);

    glBegin(GL_TRIANGLE_FAN);
    glColor3f(color.R, color.G, color.B);
    glVertex2f(- side/2, side/2);
    glVertex2f(side/2, side/2);
    glVertex2f(side/2, -side/2);
    glVertex2f(- side/2, -side/2);
    glEnd();

    glPopMatrix();
}













