//
// Created by thefo on 01.12.2021.
//
#include "../include/triangle.h"
int main()
{
    Node a, b(5,8), c(1, 16);
    Triangle triangle(a, b, c, "First Triangle");

    triangle.display();
    cout << "Distance between first and second point is " << triangle.distance(0,1) << endl;
    return 0;
}