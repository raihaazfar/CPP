// one thing many forms...method overloading and method overriding
//method name and working is the same but number of parameters and return type mein difference

//Method Overloading compile time polymorphism

#include<iostream>
using namespace std;

class Calculator{
    public:
        int add(int a, int b){
            return a+b;
        }
        int add(int a, int b, int c){ //overloading
            return a+b+c;
        }
        float add(float a, float b){ //overloading
            return a+b;
        }
};

int main(){
    Calculator c;
    int choice;

    cout<<"enter your choice: "<<endl;
    cin>>choice;

    if(choice == 1){
        int x,y;
        cout<<"enter two values: "<<endl;
        cin>>x>>y; //taking two inputs at once in one line
        cout<<"result: "<<c.add(x,y);
    }

    else if(choice == 2){
        int x,y,z;
        cout<<"enter three values: "<<endl;
        cin>>x>>y>>z; //taking three inputs at once in one line
        cout<<"result: "<<c.add(x,y,z);
    }

    else if(choice == 3){
        float x,y;
        cout<<"enter three values: "<<endl;
        cin>>x>>y; //taking three inputs at once in one line
        cout<<"result: "<<c.add(x,y);
    }
    else{
        cout<<"invalid choice"<<endl;
    }


    return 0;
}