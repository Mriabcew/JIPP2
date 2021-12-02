//
// Created by thefo on 01.12.2021.
//
#include "../include/vector.h"
#include "../include/complex.h"
#include <iostream>
using namespace std;
int main() {
    double wynik;
    Vector v1(10,5), v2(5,10);
    Vector v3 = v1 + v2;
    wynik = v1*v2;
    cout<<wynik<<endl;
    v3.print();
    cout<<"NOWA LINIA LICZBY UROJONE:\n"<<endl;
    Complex n1(1,5),n2(1,5);
    Complex n3 =n1+n2;
    n3=n1.operator/(n2);
    n3.printNumber();
    return 0;
}