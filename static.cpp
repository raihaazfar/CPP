#include<iostream>
#include<string>
using namespace std;

//Static 
//preserve value and to make things independent..
//use statickeyword with an object then 
//it's no longeer dependent on the object and can be called independently without an object 
//don't want the memory destroyed so use the word static
//before using the word static it output(ed) the same thing count was incrementing even after the calling the function 3 times.
//so now used static so that the previous value remains in the momory and increments to that to keep track of how many times the function has been called

void counter(){
    static int count = 0;
    count++;
    cout<<"Functions Called "<<count<<" times"<<endl;
}

//static member function making it independent
class Company{
    public:
    static int employeeCount;

    static void showCount(){
        cout<<"Total Count: "<<employeeCount<<endl;
    }
};

//static variable not defined globally no initialization so main cannot access it 

int Company::employeeCount = 10;

int main(){
    counter();
    counter();
    counter();

    //scopre regulation operator 
    Company::showCount();

    Company::employeeCount += 5;
    
    Company::showCount();

    return 0;
}
