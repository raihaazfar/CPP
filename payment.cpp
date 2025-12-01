#include<iostream>

using namespace std;

class Payment{
    public:
        virtual void pay(int amount) = 0;
};

class EasyPaisa : public Payment{
    public:
        void pay(int amount) override{
            cout<<"Paid by EasyPaisa"<<endl;
        }
};
class NayaPay : public Payment{
    public:
        void pay(int amount) override{
            cout<<"Paid by NayaPay"<<endl;
        }
};

int main(){
    int amount, choice;

    cout<<"Enter amount: "<<endl;
    cin>>amount;

    cout<<"1) Press for NayaPay or 2) Press for EasyPaisa"<<endl;
    cin>>choice;

    if(choice == 1){
        NayaPay n;
        n.pay(amount);
    }
    else if(choice == 2){
        EasyPaisa e;
        e.pay(amount);
    }
    else {
        cout<<"Invalid Choice"<<endl;
    }

    return 0;
}