#include<iostream>

using namespace std;
// Pointers => call by reference call by value
//any special variable in which no value is stored but the address of the another variable

// call by value //no use of pointers copy being passed  
// void mul(int x){
//     x = x * 2;
//     cout<<"Value is: "<<x<<endl;
// }
// call by reference //updated value like on actaual value changes
// void mul(int *x){
//     *x = *x * 2;
//     cout<<"Value is: "<<*x<<endl;
// }

// int a = 3;
// int *p = &a; //&reference operator *dereferdence operator value chaihiye 

int main(){
//    int num;
//    cout<<"Enter any number: "<<endl;
//    cin>>num;

//    mul(&num);

//    cout<<"Updated Value: "<<num;

    int a = 3;
    int *p = &a;

    cout<<a<<endl; //3
    cout<<&a<<endl; // address of a
    cout<<p<<endl; // address of a
    cout<<*p<<endl; // 3

    return 0;
}