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

void Point::set_x(double a) {
    x=a;

}
void Point::set_y(double a) {
    y=a;

}
double Point::distance(Point a)
{
    return sqrt(pow(x-a.get_x(),2)+pow(y-a.get_y(),2));
}