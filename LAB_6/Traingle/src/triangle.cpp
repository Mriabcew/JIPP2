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

double Triangle::distance(int firstPointIndex, int secondPointIndex) {
    Node arr[3] = {a,b,c};
    return pointDistance(arr[firstPointIndex], arr[secondPointIndex]);
}

void showTriangleData(Triangle triangle){
    triangle.display();
}
void showTriangleData(Triangle &triangle){
    triangle.display();
}
void showTriangleData(Triangle *triangle){
    triangle->display();
}
/*
ostream& operator<<(ostream &lhs,const Triangle &rhs){
    lhs<<"\nName: "<<rhs.nazwa<<" A:" << rhs.a<<" B:"<<rhs.b<<" C:"<<rhs.c;
    return lhs;
}
*/
