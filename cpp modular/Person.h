#ifndef PERSON_H
#define PERSON_H

#include<iostream>
#include<string>

using namespace std;

class Person {
    protected: 
        string name;
        int age;
    public:
        void input();
        void display();

};

#endif