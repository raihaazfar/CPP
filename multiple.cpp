//one child class and multiple parent class which it can access

#include<iostream>
using namespace std;

class Teacher{
    public:
        void teach(){
            cout<<"I can teach";
        }
};

class Reseacher{
    public: 
        void research(){
             cout<<"I can research";
        }
};

class Mentor : public Teacher, public Reseacher{
public: 
        void guide(){
             cout<<"I can guide";
        }
};

int main(){
    Mentor m;
    m.teach();
    m.research();
    m.guide();
    return 0;
};