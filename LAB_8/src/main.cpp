//
// Created by student on 29.11.21.
//
#include "../include/note.h"
int main()
{
    Note *N1= new Note();
    N1->setTitle("Notes1");
    N1->setContent();
    cout<<N1->getTitle();
    return 0;
}
