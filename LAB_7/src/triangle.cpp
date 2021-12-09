//
// Created by thefo on 02.12.2021.
//

#include "triangle.h"

Triangle::Triangle() {
    name="Triangle";
    color="black";
    a=1;
    b=1;
    c=1;
    h_a=1;
    h_b=1;
    h_c=1;
}

Triangle::Triangle(string name, string color, double a, double b, double c, double h_a, double h_b, double h_c) {
    this->name=name;
    this->color=color;
    this->a=a;
    this->b=b;
    this->c=c;
    this->h_a=h_a;
    this->h_b=h_b;
    this->h_c=h_c;

}
double Triangle::field() {
    return a*h_a;
}
double Triangle::circuit() {
    return a+b+c;
}