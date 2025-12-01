#include<iostream>
#include<vector>
#include "Student.h"
#include "Teacher.h"

using namespace std;

int main(){
    vector<Student> students;
    vector<Teacher> teachers;
    int n,m;

    cout<<"Enter no. of Students: ";
    cin>>n;

    for(int i = 0; i < n; i++){
        cout<<"Student"<<(i+1)<< "Details: "<<endl;
        Student s;
        s.inputStudent();
        students.push_back(s); //store in vector 
    }

    cout<<"Enter no. of Teachers: ";
    cin>>m;

    for(int i = 0; i < m; i++){
        cout<<"Teacher"<<(i+1)<< "Details: "<<endl;
        Teacher t;
        t.inputTeacher();
        teachers.push_back(t); //store in vector 
    }

    for(auto s: students){
        s.displayStudent();
    }

    for(auto t: teachers){
        t.displayTeacher();
    }

    return 0;
}