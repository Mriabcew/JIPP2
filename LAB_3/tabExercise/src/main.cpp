//
// Created by thefo on 02.12.2021.
//
#include "tabExercise.h"
int main(){
    srand(time(NULL));
    cout<<"ile liczb?"<<endl;
    int size;
    cin>>size;
    int *tab = new int[size];

    for(int i=0;i<size;i++) {
        tab[i] = random_number(0, 101);
        cout<<tab[i]<< " ";
    }
    cout<<"max:"<<max_number(tab,size)<<endl;
    reverse_array(tab,size);
    for(int i=0;i<size;i++)
    {
        cout<<tab[i]<<" ";
    }
    delete [] tab;
    return 0;
}
