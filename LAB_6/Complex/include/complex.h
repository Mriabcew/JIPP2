//
// Created by thefo on 01.12.2021.
//

#ifndef JIPP2_COMPLEX_H
#define JIPP2_COMPLEX_H
#include <iostream>
#include <math.h>
using namespace std;
class Complex{
private:
    double x,y;
public:
    Complex();
    Complex(double ,double );
    void printC();

    Complex operator!()const{
        return {x,-1*y};
    }
    Complex operator+(const Complex &rhs) const {
        return {x + rhs.x, y + rhs.y};
    }
    Complex &operator+=(const Complex &rhs) {
        this->x = this->x + rhs.x;
        this->y = this->y + rhs.y;
        return *this;
    }
    Complex operator-(const Complex &rhs) const {
        return {x - rhs.x, y - rhs.y};
    }

    Complex &operator-=(const Complex &rhs) {
        this->x = this->x - rhs.x;
        this->y = this->y - rhs.y;
        return *this;
    }
    double operator&()const {
        return{sqrt(x*x + y*y)};
    }

};

#endif //JIPP2_COMPLEX_H
