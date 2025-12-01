//header files .h iss class mein ye cheezein hain 
//method name and data type
//declaration

#ifndef STUDENT_H //compiler condition that i  its not defined then define again just to avoid errors
#define STUDENT_H

#include<iostream>
#include<string>

using namespace std;

class Student {
    private:
        string name;
        int marks;
    public:
        Student(); // default 
        Student(string n, int m); // parameterized

        void inputData();
        void displayData();
};

#endif