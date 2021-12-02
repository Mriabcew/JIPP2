//
// Created by thefo on 02.12.2021.
//

#include "circle.h"

Circle::Circle() {
    name="Circle";
    color="Red";
    R=1;
}

Circle::Circle(string name,string color,double R) {
    this->name=name;
    this->color=color;
    this->R=R;
}

double Circle::field() {
    return PI*R*R;
}

double Circle::circuit() {
    return 2*PI*R;
}