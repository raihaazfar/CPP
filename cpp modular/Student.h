#ifndef STUDENT_H
#define STUDENT_H

// #include<iostream>
// #include<string> already in person file... so no problem if not included in othr files because they will inherit it either way 
#include"Person.h"

using namespace std;

class Student : public Person {
    int marks;
    public:
        void inputStudent();
        void displayStudent();
};

#endif
