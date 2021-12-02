//
// Created by thefo on 01.12.2021.
//

#include "../include/triangle.h"

Triangle::Triangle()
{
    nazwa ="t1";
    a= Node (0,0);
    b= Node (2,0);
    c= Node (0,2);
}
Triangle::Triangle(Node a,Node b,Node c,string nazwa)
{
    this->nazwa =nazwa;
    this->a= a;
    this->b= b;
    this->c= c;
}

void Triangle::display() {
    a.display();
    b.display();
    c.display();
}
/*
ostream& operator<<(ostream& os, Triangle& t)
{
   os<<&t.a.display()<<t.b.display();
    return os;
}*/