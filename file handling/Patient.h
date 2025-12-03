#ifndef PATIENT_H
#define PATIENT_H

#include <iostream>
#include <string>
#include <fstream> //used for file handling, this header file has two header files include if stream(read file) and of stream(write file) and fstream is the combo of both( read and write both)
//ifstream + ofstream

using namespace std;

class Patient{
    private:
        string name;
        int age;
        string disease;
    public:
        void input();
        void saveFile();
        void displayFromFile();
};

#endif