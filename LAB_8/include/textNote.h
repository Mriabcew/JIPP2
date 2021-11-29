//
// Created by student on 29.11.21.
//

#ifndef JIPP2_TEXTNOTE_H
#define JIPP2_TEXTNOTE_H

#include "note.h"

class TextNote:Note {
private:
    string content;
public:
    string getContent();
    void setContent(string);
};

#endif //JIPP2_TEXTNOTE_H
