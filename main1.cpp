#include<iostream>

using namespace std;

class Student{
    public: 
        string studentName;
        int age;

        //with methods it is return type and with variables it is data type 
        //void means it will not return anything

        void displayDetails(){ 
            cout<<"Student Name: "<<studentName<<endl<<"Student Age is: "<<age<<endl;
        }
};

int main(){
    
    // int myAge = 23;
    // float height = 40.45;
    // double weight = 20.87245;
    // char grade = 'A'; //single quotations for character 
    // bool isStudent = true;
    // string myName = "Raiha"; //double quotations fro string since multiple characters are there.

    // cout<<myAge<<endl;
    // cout<<height<<endl;
    // cout<<weight<<endl;
    // cout<<grade<<endl;
    // cout<<isStudent<<endl;
    // cout<<myName<<endl;


    //operators, operands, expression

    //Arithmetic 
    // int a = 10, b = 3; //same data type variables can be written in a single line 
    // cout<<"Addition: "<<a+b<<endl;
    // cout<<"Subtraction: "<<a-b<<endl;
    // cout<<"Multiplication: "<<a*b<<endl;
    // cout<<"Division: "<<a/b<<endl;
    // cout<<"Modulus: "<<a%b<<endl;
    //for power exponent ** 

    //Relational Operators
    // cout<<(a == b)<<endl; //comparison...also relational operators always return boolean output
    // cout<<(a != b)<<endl; 
    // cout<<(a > b)<<endl; 
    // cout<<(a < b)<<endl; 
    //no === in c++ only in js since type already defined in c++ in js it used to compare and also tell the type

    //Logical Operators 
    // cout<<(a > b && b < a)<<endl;
    // cout<<(a > b || b < a)<<endl;
    // cout<<!(a > b)<<endl;

    //Assignemnt Operators 
    // int c = 3; 
    // // c = c + 4; //full form
    // c += 4; //shortened property

    //Increment / Decrement 
    // cout<<"Pre Increment: "<<++c<<endl; 
    // cout<<"Post Increment: "<<c++<<endl; // will print actual value first and then increment
    // cout<<c;
    // cout<<"Pre Decrement: "<<--c<<endl; 
    // cout<<"Post Decrement: "<<c--<<endl; // will print actual value first and then decrement
    // cout<<c;

    //User Input
    // int age;
    // cout<<"Enter your age: ";
    // cin>>age;

    // cout<<"Your age is: "<<age;

    // string myName;
    // cout<<"Enter your Name: ";
    // //cin>>myName; //without space inputs
    // getline(cin, myName);

    // cout<<"User name is: "<<myName;


    //everything above is procedural programming langauge
    //c++ is prcedural that is pop language as well as oop too.
    //c sharp and js is completely oop

    Student raiha; //object name 
    raiha.studentName = "Raiha";
    raiha.age = 21;
    raiha.displayDetails();

    return 0;

    
}