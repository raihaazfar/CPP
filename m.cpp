#include<iostream>
#include<vector>
#include "Student.h"

using namespace std;

int main(){
    vector<Student> students;
    int n;

    cout<<"Enter no of students: "<<endl;
    cin>>n;

    for(int i = 0; i < n; i++){
        Student s;
        cout<<"Student "<<i+1<<" Details: "<<endl;
        s.inputData();
        students.push_back(s);
    }

    cout<<"Students Data: "<<endl;

    for(auto std: students){
        std.displayData();
    }
    
    return 0;
}