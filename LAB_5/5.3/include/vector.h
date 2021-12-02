//
// Created by thefo on 01.12.2021.
//

#ifndef JIPP2_VECTOR_H
#define JIPP2_VECTOR_H

#include <math.h>

class Vector{
private:
    double x, y;
public:
    Vector() {};

    Vector(double x, double y) : x(x), y(y) {}

    double length();
    void print();
    Vector operator+(const Vector &rhs) const {
        return {x + rhs.x, y + rhs.y};
    }
    Vector &operator+=(const Vector &rhs) {
        this->x = this->x + rhs.x;
        this->y = this->y + rhs.y;
        return *this;
    }
    Vector operator-(const Vector &rhs) const {
        return {x - rhs.x , y - rhs.y};
    }
    Vector &operator-=(const Vector &rhs) {
        this->x = this->x - rhs.x;
        this->y = this->y - rhs.y;
        return *this;
    }
    double operator*(const Vector &rhs) const{
        return x * rhs.x+y * rhs.y;
    }

};

#endif //JIPP2_VECTOR_H
