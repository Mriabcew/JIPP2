//
// Created by thefo on 03.12.2021.
//
#include "tabExercise.h"

int random_number(int a,int b)
{
    return rand()%b+a;
}
int max_number(int tab[],int size)
{
    int max=tab[0];
    for (int i = 1; i < size; i++)
        if (tab[i]>max)
            max = tab[i];
    return max;
}

void reverse_array(int tab[],int size)
{
    for(int i=0;i<size/2;i++)
    {  swap(tab[i],tab[size-i-1]);
    }
}

