#ifndef INC_004_MYHEADER_H
#define INC_004_MYHEADER_H

double randomRange(double min, double max);


class Quad {
public:
    struct Color {
        double R;
        double G;
        double B;
    };
    struct RotAxis {
        double X;
        double Y;
        double Z;
    };
    double cenx;
    double ceny;
    double side;
    double angle;
    double angleinc;
    Color color;
    RotAxis rotaxis;

    void Rotate();
    void ShowQuad();
    void QuadGenerate();
};

class Circle {
public:
    struct Color {
        double R;
        double G;
        double B;
    } color;
    float cenx;
    float ceny;
    float radius;
    float speed_x;
    float speed_y;

    void show();
    void show_width(float width);
    void generate();
    void transform(float scale);
    void move(float X, float Y);
};

class Point {
public:
    double B;
    struct Color {
        double R;
        double G;
        double B;
    } color;

    float cenx;
    float ceny;

    void generate();
    void show();
    void transform(float);
};

void Point_move(Circle *);

#endif //INC_004_MYHEADER_H
