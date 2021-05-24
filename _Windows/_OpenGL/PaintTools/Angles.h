//
// Created by User on 21.05.2021.
//

#ifndef PAINTTOOL_ANGLES_H
#define PAINTTOOL_ANGLES_H

#include <iostream>
#include <string>

namespace Angles {
    enum class Angle_type;
    class Angle;
    float sin(const Angle&);
    float cos(const Angle&);
    float tan(const Angle&);
}


enum class Angles::Angle_type {
    radian, degrees
};


class Angles::Angle {
public:

    Angle();

    Angle(float angle);

    Angle(float angle, Angle_type in_type);

    Angle(const Angle &input);

    Angle &operator=(const Angle &input);

    Angle &operator+=(const Angle &input);

    Angle &operator-=(const Angle &input);

    Angle &operator/=(float input);

    Angle operator+(const Angle &input);

    Angle operator-(const Angle &input);

    Angle operator/(const float &input);


    friend std::ostream &operator<<(std::ostream &instream, const Angle &angle_obj) {
        instream << angle_obj.angle;
        return instream;
    }

    class Div_by_zero : public std::exception {
    public:
        explicit Div_by_zero(const std::string &msg) {
            static std::string prefix{"Division by zero! comment: "};
            message = prefix + msg;
        }
        std::string message{};
    };

    static Angle convert(const Angle &input, Angle_type to_at);
    Angle convert(Angle_type to_at) const;

    void print() const;

    float angle{0};

    Angle_type angle_type;

    static constexpr float PI{3.141592654};

protected:
    float check(float) const;

    struct {
        float high, low;
    } limit{0, 0};
};


#endif //PAINTTOOL_ANGLES_H
