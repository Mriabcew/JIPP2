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

double Cuboid::getHeight() {
    return height;
}

double Cuboid::getLength() {
    return length;
}
double Cuboid::getWidth() {
    return width;
}

void Cuboid::setWidth(double a)
{
    width=a;
}
void Cuboid::setLength(double a)
{
    length=a;
}
void Cuboid::setHeight(double a) {
    height=a;
}