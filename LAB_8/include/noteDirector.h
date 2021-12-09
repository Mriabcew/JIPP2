//
// Created by student on 29.11.21.
//

#ifndef JIPP2_NOTEDIRECTOR_H
#define JIPP2_NOTEDIRECTOR_H
#include "note.h"
#include <iostream>
#include <vector>
using namespace std;
class NoteDirector{
private:
    vector <Note> lista_notatek;
public:
    void addNote();
    void deleteNote();
    void editNote();
    void clearNotesList();


};

#endif //JIPP2_NOTEDIRECTOR_H
