//Inheritance - Parent/base/super Class(method properties defined) and Child Class/drive/sub (Inherit them from parents)
//Types: 5 types single, Mulitple, Muiltilevel, Hierarchical, Hybrid

//single is only one parent class and one child class
//parent share hongein feautures and cild uses those features
#include<iostream>
using namespace std;

class Person{
    public:
        string name;
        int age;

        void getPersonInfo(){
            // cin.ignore();
            cout<<"Enter name: ";
            getline(cin, name);
            cout<<"Enter your age: ";
            cin>>age;
        }
};

//colon : used for inheritance
class Student : public Person{
    public: 
        int rollNo;
        void getStudentData(){
            cout<<"Enter Student Roll No: ";
            cin>>rollNo;
        }
        void display(){
            cout<<"Name: "<< name << "Age: "<< age <<
            "Roll No: " <<rollNo;
        }
};

int main(){
    Student s;
    cout<<"Student Details: "<<endl;
    cin.ignore(); //buffer mein value na jaye comsiders enter too we dont want that
    s.getPersonInfo();
    s.getStudentData();
    s.display();
    return 0;
};