//
// Created by thefo on 03.12.2021.
//
#include "fun.h"
int main(){
    int a,b;
    cin>>a;
    cin>>b;
    cout<<srednia(&a,&b)<<endl;
    liczby_wieksze_od_zero();
    int tab1[7] = {1, -1, 5, 4, 5, 0, 6};
    int size = sizeof(tab1) / sizeof(int);
    sortowanie(tab1,size);
   fun(5,&a);
   cout<<a;
    return 0;
}