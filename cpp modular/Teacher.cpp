#include "Teacher.h"

void Teacher::inputTeacher() {
    input();
    cout<<"Enter Subject: "<<endl;
    getline(cin >> ws, subject);
}

void Teacher::displayTeacher() {
    display();
    cout<<" | Subject: "<<subject<<endl;
}