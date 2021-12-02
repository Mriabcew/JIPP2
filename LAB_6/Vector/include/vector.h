//
// Created by thefo on 01.12.2021.
//

#ifndef JIPP2_VECTOR_H
#define JIPP2_VECTOR_H
#include <math.h>
#include <iostream>
using namespace std;
class Vector{
private:
    double x, y;

public:
    Vector();

    Vector(double x, double y);

    double length();
    void printV();

    Vector operator!() const;

    Vector operator+(const Vector &)const;

    Vector operator+=(const Vector &);

    Vector operator-(const Vector &)const;

    Vector operator-=(const Vector &);

    double operator*(const Vector &)const;

    Vector operator%(const double &)const;

    friend Vector operator%(const double &,const Vector &);

    Vector operator%=(const double &);

    bool operator ==( Vector &);

    friend ostream & operator<<(ostream &,Vector &);
};

#endif //JIPP2_VECTOR_H
