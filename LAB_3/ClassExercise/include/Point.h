//
// Created by thefo on 07.11.2021.
//

#ifndef JIPP2_POINT_H
#define JIPP2_POINT_H
#include <math.h>
#include <cstdlib>
#include <iostream>

using namespace std;
class Point {
private:
    double x;
    double y;
public:
    Point();
    Point(double ,double );
    double get_x();
    double get_y();
    double distance(Point);

};


#endif //JIPP2_POINT_H
