#include<iostream>

//internal things detail code being hidden from user 

using namespace std;
// pure virtual functions 
// abstract classes (no implementation of its own and no object of it is made )

class Shape{
    public:
        virtual void area() = 0; //abstarct classes virtual  keyword used = 0 to tell its an abstract method 
};

class Circle : public Shape{ //rule applied on circle class that need s to overwrite the area method for sure 
    public:
        int radius;
        Circle(int r){
            radius = r;
        }
        void area() override{
            cout<<"Area: "<<3.14*radius*radius<<endl;
        }
};

int main(){
    Circle c(5);
    c.area();
    return 0;
}