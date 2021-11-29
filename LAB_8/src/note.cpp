//
// Created by student on 29.11.21.
//

#include "../include/note.h"

Note::Note()
{
    title="New Note";
}

string Note::getTitle(){
    return title;
}

void Note::setTitle(string title) {
    this->title=title;
}