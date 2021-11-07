#include "../include/MyFirstClass.h"

void MyFirstClass::readAnswer() {
    cin>>answer;
}

void MyFirstClass::printQuestion() {
    cout<<question<<endl;
}

void MyFirstClass::askUser() {
    printQuestion();
    readAnswer();
}

string MyFirstClass::getQuestion() {
    return question;
}

void MyFirstClass::setPoints(short points) {
    this->points = points;

}

MyFirstClass::MyFirstClass(string firstName, string secondName, string question, string answer, short points)
        : secondName(secondName),question(question),points(points)
{
    this->firstName =firstName;
}