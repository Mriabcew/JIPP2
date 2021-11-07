//
// Created by thefo on 06.11.2021.
//

#ifndef JIPP2_MYFIRSTCLASS_H
#define JIPP2_MYFIRSTCLASS_H

#include <iostream>
#include <string>

using namespace std;

class MyFirstClass {
private:
    string firstName;
    string secondName;
    string question = "No question";
    string answer;
    short points;

    void readAnswer();

public:
    MyFirstClass(string firstName, string secondName, string question, string answer, short points);

    void printQuestion();

    void askUser();

    string getQuestion();

    void setPoints(short points);

};




#endif //JIPP2_MYFIRSTCLASS_H
