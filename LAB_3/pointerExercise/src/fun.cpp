//
// Created by thefo on 03.12.2021.
//
#include "fun.h"

double srednia(int *a,int *b)
{
    return (*a+*b)/2;

}
void liczby_wieksze_od_zero() {
    int numer, i;
    cout << "Podaj ile chcesz liczb wprowadzic" << endl;
    cin >> numer;
    int *tab = new int[numer - 1];

    cout << "zacznij wprowadzac liczby:";
    for (int i = 0; i < numer; i++)
        cin >> tab[i];


    cout << "wieksze elementy:";
    for (int i = 0; i < numer; i++) {
        if (*(tab + i) > 0)
            cout << *(tab + i) << ",";
    }

}

void sortowanie(int *tab1, int rozmiar)
{
    cout<<"Tablica poczatkowa :";
    for(int i = 0; i < rozmiar; i++)
        cout << *(tab1 + i) << ",";

    for(int i = 0; i < rozmiar; i++)
        for(int j = 1;j < rozmiar-i; j++)
            if(*(tab1 + j - 1) > *(tab1 + j))
                swap(*(tab1 + j),*(tab1 + j - 1));

    cout<<endl<<"Tablica po posortowaniu :";
    for(int i = 0; i < rozmiar; i++)
        cout << *(tab1 + i) <<",";

}
int fun(int x,int* wskaznik)
{
    *wskaznik=x;
    return *wskaznik;
}