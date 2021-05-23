#include <gl/gl.h>
#include "myHeader.h"
#include <math.h>

double randomRange(double min, double max) {
    double R = (double) (rand() % 10000) / 10000.0;
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

void Quad::ShowQuad() {

    glPushMatrix();
    glLoadIdentity();
    glTranslatef(cenx, ceny, 0);
    glRotatef(angle, rotaxis.X, rotaxis.Y, rotaxis.Z);

    glBegin(GL_LINE_LOOP);
    glColor3f(color.R, color.G, color.B);
    glVertex2f(-side / 2, side / 2);
    glVertex2f(side / 2, side / 2);
    glVertex2f(side / 2, -side / 2);
    glVertex2f(-side / 2, -side / 2);
    glEnd();

    glPopMatrix();
}

void Circle::show() {
    int point_number = 100;
    float x, y, angle = 0;

    glPushMatrix();
    glLoadIdentity();
    glTranslatef(cenx, ceny, 0);

    glBegin(GL_LINE_LOOP);
    glColor3f(color.R, color.G, color.B);
    for (int i = 0; i < point_number; ++i) {
        angle = 6.283 * i / point_number;
        x = this->radius * cos(angle);
        y = this->radius * sin(angle) * 1920 / 1080;
        glVertex2f(x, y);
    }
    glEnd();

    glPopMatrix();
}

void Circle::show_width(float width) {
    int point_number = 100;
    float xt, yt, xb, yb, angle = 0;
    float screen_ratio = 1920.0 / 1080; //FIXME: screen ratio
    float radiusTop = radius + width / 2;
    float radiusBot = radius - width / 2;

    glPushMatrix();
    glLoadIdentity();
    glTranslatef(cenx, ceny, 0);

    glBegin(GL_TRIANGLE_STRIP);
    glColor3f(color.R, color.G, color.B);
    for (int i = 0; i <= point_number; ++i) {
        angle = 6.283 * i / point_number;
        xt = radiusTop * cos(angle);
        yt = radiusTop * sin(angle) * screen_ratio;

        xb = radiusBot * cos(angle);
        yb = radiusBot * sin(angle) * screen_ratio;

        glVertex2f(xb, yb);
        glVertex2f(xt, yt);
    }

    glEnd();
    glPopMatrix();
}


void Circle::generate() {
    this->cenx = randomRange(-1, 1);
    this->ceny = randomRange(-1, 1);
    this->radius = randomRange(0.005, 0.08);
    this->color = {randomRange(0, 1),
                   randomRange(0, 1),
                   randomRange(0, 1)};
    this->speed_x = randomRange(-2, 2);
    this->speed_y = randomRange(-2, 2);
}

void Circle::transform(float scale) {
    this->cenx *= scale;
    this->ceny *= scale;
}

void Circle::move(float X, float Y) {
    struct {
        float x, y;
    } screensize {1920, 1080};
    float xf = (X-screensize.x/2.0) / (screensize.x/2.0);
    float yf = (Y-screensize.y/2.0) / (screensize.y/2.0);
    cenx = xf;
    ceny = yf;
}

void Point::generate() {
    this->cenx = randomRange(-1, 1);
    this->ceny = randomRange(-1, 1);
    this->color = {randomRange(0, 1),
                   randomRange(0, 1),
                   randomRange(0, 1)};
}

void Point::show() {
    glPushMatrix();
    glLoadIdentity();
    glTranslatef(cenx, ceny, 0);

    glBegin(GL_POINTS);
    glColor3f(color.R, color.G, color.B);

    glVertex2f(0, 0);

    glEnd();
    glPopMatrix();
}

void Point::transform(float scale) {
    this->cenx *= scale;
    this->ceny *= scale;
}



void Point_move(Circle *nyan) {
    float X, Y;

    if (nyan->cenx - nyan->radius < -1) {
        nyan->speed_x = -nyan->speed_x;
        nyan->cenx = -1 + nyan->radius;
    }
    if (nyan->cenx + nyan->radius > 1) {
        nyan->speed_x = -nyan->speed_x;
        nyan->cenx = 1 - nyan->radius;
    }
    if (nyan->ceny - nyan->radius < -1) {
        nyan->speed_y = -nyan->speed_y;
        nyan->ceny = -1 + nyan->radius;
    }
    if (nyan->ceny + nyan->radius > 1) {
        nyan->speed_y = -nyan->speed_y;
        nyan->ceny = 1 - nyan->radius;
    }

    X = (nyan->cenx + 1.0) / 2.0 * 1920 + nyan->speed_x;
    Y = (nyan->ceny + 1.0) / 2.0 * 1080 + nyan->speed_y;

    nyan->move(X, Y);
    nyan->show_width(0.01);
}