#include <iostream>
#include "Patient.h"

using namespace std;

int main(){
    Patient p;
    int choice; //user wants to add patient data or want to read the data from the file

    do{
        cout<<"1) Add New Patient"<<endl;
        cout<<"2) Display Patients Record"<<endl;
        cout<<"3) Exit"<<endl;

        cout<<"Enter Your Choice: ";
        cin>>choice;

        switch(choice){ //since choice cases are available, switch case direct numbering..also need to break after every case otherwise its flow is such that after a match of a case all are excuted line by line even when not needed. default doesnt need break since after that nothing comes
            case 1:
                p.input();
                p.saveFile();
                break;
            case 2:
                p.displayFromFile();
                break;
            case 3:
                cout<<"Exiting----"<<endl;
                break;
            default:
                cout<<"Invalid Choice"<<endl;
        } 

    } while(choice != 3); 
}