//
// Created by thefo on 01.12.2021.
//

#include "../include/vector.h"

Vector::Vector(): x(0), y(0) {}

Vector::Vector(double x, double y) : x(x), y(y) {}

double Vector::length() {
    return sqrt(x * x + y * y);
}

void Vector::printV(){
    cout<<"(x y): "<< x<<" "<<y<<endl;
}
Vector Vector::operator!() const {
    return {-1*x,-1*y};
}

Vector Vector::operator+(const Vector &rhs) const{
    return {x + rhs.x, y + rhs.y};
}

Vector Vector::operator+=(const Vector &rhs) {
    this->x = this->x + rhs.x;
    this->y = this->y + rhs.y;
    return *this;
}

Vector Vector::operator-(const Vector &rhs) const {
    return {x - rhs.x, y - rhs.y};
}

Vector Vector::operator-=(const Vector &rhs) {
    this->x = this->x - rhs.x;
    this->y = this->y - rhs.y;
    return *this;
}

double Vector::operator*(const Vector &rhs) const {
    return {(x * rhs.x)+(y * rhs.y)};
}

Vector Vector::operator%(const double &rhs) const {
    return {x*rhs,y*rhs};
}


Vector Vector::operator%=(const double &rhs) {
    this->x = this->x * rhs;
    this->y = this->y * rhs;
    return *this;
}

bool Vector::operator ==( Vector &rhs) {
    if(this->x == rhs.x && this->y == rhs.y && this->length() == rhs.length())
        return true;
    else
        return false;
}

ostream & operator<<(ostream &os,Vector &v) {
    os<<v.x<<" "<<v.y<<endl;
    return os;
}

Vector operator%(const double  &lhs,const Vector &rhs){
    return {lhs*rhs.x,lhs*rhs.y};}