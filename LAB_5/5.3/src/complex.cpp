//
// Created by thefo on 01.12.2021.
//

#include "../include/complex.h"

Complex::Complex(double x,double y):x(x),y(y)
{
}

void Complex::printNumber()
{
    cout<<"( "<< x<<" + "<<y<<"i"<<" )";
}

