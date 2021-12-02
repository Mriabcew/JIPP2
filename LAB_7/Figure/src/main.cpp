//
// Created by thefo on 02.12.2021.
//
#include "circle.h"
#include "rectangle.h"
#include "triangle.h"
int main()
{
    Circle c1;
    Rectangle r1;
    Triangle t1;
    cout<<"Pola figur: "<<c1.field()<<"\n"<<r1.field()<<"\n"<<t1.field()<<endl;
    cout<<"Obwody figur: "<<c1.circuit()<<"\n"<<r1.circuit()<<"\n"<<t1.circuit()<<endl;


    return 0;
}

