//
// Created by student on 29.11.21.
//

#ifndef JIPP2_LISTNOTE_H
#define JIPP2_LISTNOTE_H

#include "note.h"

class ListNote:Note {
private:
    string content;
public:
    ListNote();
    string getContent();
    void setContent();
    ~ListNote();
};

#endif //JIPP2_LISTNOTE_H
