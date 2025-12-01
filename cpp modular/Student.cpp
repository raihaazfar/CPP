#include "Student.h"

void Student::inputStudent(){
    input();
    cout<<"Enter marks: "<<endl;
    cin>>marks;
}

void Student::displayStudent(){
    display();
    cout<<" | Marks: "<<marks<<endl;
}