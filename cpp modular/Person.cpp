#include "Person.h"

// :: scope resolution reference operator

void Person::input(){
    cout<<"Enter Name: ";
    getline(cin >> ws, name);
    cout<<"Enter Age: "<<endl;
    cin>>age;
}

void Person::display(){
    cout<<"Name: "<<name<<" | Age: " <<age<<endl;
}