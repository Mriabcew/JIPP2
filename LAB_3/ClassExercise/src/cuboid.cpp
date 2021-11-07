#include "../include/cuboid.h"

double Cuboid::countArea()
{
    double area = 2*(width*length+width*height+length*height);
    return area;
}

Cuboid::Cuboid(double width, double length, double height)
        :width(width),length(length),height(height)
{

}
