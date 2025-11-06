//Method Overriding run time polyymorphism 
//memory space function of the parent class will be the same 
//like in inheritance child will use the parents feature the child 
//class object uses that but on its own terms with modification by overriding
#include<iostream>
#include<string> //to remove the getline error thingy (added this on my own) needed for std::string and getline
using namespace std;

class Employee{
    public:
        string name;
        float salary;

        void getData(){
            cout<<"enter employee name: "<<endl;
            getline(cin, name);
            cout<<"enter salary: "<<endl;
            cin>>salary;
        }
        virtual void calculateBonus(){
            cout<<"Bonus: "<< salary * 0.05<<endl;
        }
};

class Manager : public Employee{
    public:
        void calculateBonus() override{ //override key word is necessary inorder to do that use virtual before the parent class method you wish to access and modify
            cout<<"Bonus: "<< salary * 0.10<<endl;
        }
};

int main(){
    Employee e;
    Manager m;

    m.getData();
    m.calculateBonus();
    return 0;
}