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

#endif //INC_004_MYHEADER_H
