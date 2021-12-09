//
// Created by thefo on 01.12.2021.
//

#ifndef JIPP2_COMPLEX_H
#define JIPP2_COMPLEX_H
#include <iostream>
using namespace std;

class Complex{
private:
    double x,y;
public:
    Complex();
    Complex(double,double );
    void printNumber();

    Complex operator+(const Complex &rhs) const {
        return {x + rhs.x, y + rhs.y};
    }
    Complex operator-(const Complex &rhs) const {
        return {x - rhs.x, y - rhs.y};
    }
    Complex operator*(const Complex &rhs) const {
        return {x* rhs.x + (-1)* y * rhs.y,x*rhs.y + y*rhs.x};
    }
    Complex operator/(const Complex &rhs) const{
        return {x* rhs.x + y * rhs.y/(rhs.x*rhs.x + rhs.y*rhs.y),y * rhs.x - x *rhs.y/(rhs.x*rhs.x + rhs.y*rhs.y)};
    }


};
#endif //JIPP2_COMPLEX_H
