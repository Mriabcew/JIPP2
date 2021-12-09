//
// Created by thefo on 01.12.2021.
//
#include "vector.h"
#include <iostream>
using namespace std;
double Vector::length()
{
        return sqrt(x * x + y * y);
}

void Vector::print() {
    cout<<"Dlugosc vectora: "<<length()<<endl<<"Koniec vectora: ("<<x<<","<<y<<")"<<endl;
}