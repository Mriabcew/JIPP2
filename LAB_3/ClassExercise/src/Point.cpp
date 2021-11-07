#include "../include/Point.h"

Point::Point()
{

    x=rand()%101;
    y=rand()%101;
}

Point::Point(double x, double y):x(x),y(y) {}
double Point::get_x()
{
    return x;
}
double Point::get_y()
{
    return y;
}
double Point::distance(Point a)
{
    return sqrt(pow(x-a.get_x(),2)+pow(y-a.get_y(),2));
}