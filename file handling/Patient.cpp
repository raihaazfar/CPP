#include "Patient.h"
//define the methods declared in the patient.h file

void Patient::input(){
    cout<<"Enter Name: "<<endl;
    getline(cin >> ws, name);
    cout<<"Enter Age: "<<endl;
    cin>>age;
    cout<<"Enter Disease: "<<endl;
    getline(cin >> ws, disease);
}

//file handling stuff
void Patient::saveFile(){
   ofstream file("patients.txt", ios::app); //input oputput stream (mode) and app is for append, file name should be in double quotations
   file<< name << ","<<age <<","<<disease<< endl;
   file.close();
   cout<<"Data Saved!"<<endl;
}

void Patient::displayFromFile(){
    ifstream file("patients.txt");
    string line;

    cout<<"-------- All Patients --------"<<endl;
    while(getline(file, line)){
        cout<<line<<endl;
    }
    file.close();
}