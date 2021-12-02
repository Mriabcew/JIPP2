//
// Created by thefo on 02.12.2021.
//

#include "rectangle.h"

Rectangle::Rectangle() {
    name="Rectangle";
    color="Purple";
    a=1;
    b=1;
}

Rectangle::Rectangle(string name, string color, double a, double b) {
    this->name=name;
    this->color=color;
    this->a=a;
    this->b=b;
}

double Rectangle::field() {
    return a*b;
}
double Rectangle::circuit() {
    return 2*a+2*b;
}