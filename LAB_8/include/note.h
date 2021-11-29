//
// Created by student on 29.11.21.
//

#ifndef JIPP2_NOTE_H
#define JIPP2_NOTE_H

#include <iostream>
using namespace std;

class Note{
private:
    string title;
public:
    Note();
    string getTitle();
    void setTitle(string);
    string getContent();
    void setContent();
    ~Note();
};

#endif //JIPP2_NOTE_H
