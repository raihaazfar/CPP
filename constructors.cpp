#include<iostream>
#include<string>
using namespace std;

//constructor is a special method...built in or user defined had to be called but this one gets called automatically when the class's object is created
//constructor name same as class name is language specific only...C++ is ok but in some other languages this definition doesn't apply much 
//constructor work is to initializa obects...doesn't return anything
class Student{
    public: 
        string name;
        int age;
        float marks;

        Student(){ //default constrctor at the backend is Studnet(){}
            cout<<"Default Constructor: "<<endl;
            name = "Guest";
            age = 0;
            marks = 0;
        }

        //Parametrized Constructor we provide values ourselves that it should use those specific values we give 
        //two defaut and two paramaetrized cannot be used together
        Student(string n, int a, float m){
            cout<<"Parametrized Constructor"<<endl;
            name = n;
            age = a;
            marks = m;
        }

        void display(){
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"Marks: "<<marks<<endl;
        }
        //copy constructor & operator is referencing the object's address
        //bana banaya object..we pass the vaklue and it copies it
        Student(const Student &obj){
            cout<<"Copy Constructor: "<<endl;
            name = obj.name; 
            age = obj.age;
            marks = obj.marks;
        } 
};

int main(){
    Student s;
    s.display();

    string name;
    int age;
    float marks;

    cout<<"Enter Name: "<<endl; //user input to give it to the constructor will give it to the function
    getline(cin, name);

    cout<<"Enter Age: "<<endl;
    cin>>age;

    cout<<"Enter Marks: "<<endl;
    cin>>marks;

    Student s2(name, age, marks);
    s2.display();

    Student s3 = s2;
    s3.display();
    return 0;
}