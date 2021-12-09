#include "../include/Figure.h"

Figure::Figure(int number_of_vertices)
:number_of_vertices(number_of_vertices)
{
    tab=new Point[number_of_vertices];
    for(int i=0;i<number_of_vertices;i++)
        tab[i]=Point();
    cout<<"KONSTRUKTOR ZOSTAL WYWOLANY"<<endl;
}