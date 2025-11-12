#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Student{
    public: 
        string name;
        int marks;

        void inputDetails(){
            cout<<"Enter Name: "<<endl;
            getline(cin >> ws, name); //ws wide spaces ignores spaces after cin either do cinignore every time or do this. this is much better
            cout<<"Enter Marks: "<<endl;
            cin>>marks;
        }
        void display(){
            cout<<"Name: "<<name<<" | Marks: "<<marks<<endl;
        }
};


int main(){
    //vetor use on object and instead odf datatype enter the classname of the object

    vector<Student> std; //details got them stored in vector
    int n;

    cout<<"Enter no. of students: "<<endl;
    cin>>n;

    for(int i = 0; i < n; i++){
        Student s;
        cout<<"Student"<<i+1<<" details"<<endl;
        s.inputDetails();
        std.push_back(s); //dont  use s.display...everything in vector the details will be pusheed back forst then display
    }

    cout<<"----- Student Details -----"<<endl;
    for(auto m : std){ //std is the vector name...and the auto is basically witten since the vector has no datatype you know
        m.display();
    }
    
    return 0;
}