//
// Created by thefo on 03.12.2021.
//
#include "dzielenie.h"
void  fun1(int a,int b) {
    try {
        if (a % b != 0)
            throw "Liczba nie moze byc ulamkiem";
    }
    catch (const char *msg) {
        cout << msg << endl;
        return;
    }
    cout<< a/b;
}

void fun2()
{
    string wyraz;
    int liczba_wyraz;
    cout<<"Podaj dowolny ciag znakow: ";
    cin>>wyraz;
    try{
        liczba_wyraz = stoi(wyraz);
    }
    catch(std::out_of_range)
    {
        cout<<"Ciag znakow jest za dlugi";
        return;
    }
    catch(std::invalid_argument)
    {
        cout<<"Podano nieprawidlowy argument";
        return;
    }
    cout<<"Po konwersji: "<<liczba_wyraz;
}