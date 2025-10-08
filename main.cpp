#include<iostream> 
using namespace std; //standard library we are using
//header file c++ k backend functions ko run karney k liye # is for include header file iostream is input ouput stream
//this is a standard library

//class in c++ always outside main..for class always pascal case
class Car{
    public: 
        string name; //properties or attributes or data members and methods are action or behaviour
        int year;
};

int main(){
    // std::cout<<"Raiha"; 
    //variables
    // int myAge = 23;
    //data type variable name in camel-casing assignment operator 
    // cout<<myAge;
    //cout error at first but then place std and colons so error goes away  cout the output we need to print 
    //semi-colon needed after every line of code otehrwise an error will display
    //ctrl + / for comment 
    //variable - memory has a container so we store a value or data in that memory location...giving that memory location a aname is variable
    // here we need to declare the data type to store a value in a variable

    Car c1; //class object 
    c1.name = "Car 1";
    c1.year = 2025; 
    cout<<"Car name is: "<<c1.name;
    return 0; //function ka data type is integer so we return an integer 0 too

}