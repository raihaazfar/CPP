//multiple, multilevel, hierarchical

#include<iostream>
using namespace std;

class Teacher{
    public:
        void teach(){
            cout<<"I can teach";
        }
};

class Reseacher : public Teacher{
    public: 
        void research(){
             cout<<"I can research";
        }
};

class Mentor{
    public: 
        void guide(){
             cout<<"I can guide";
        }
};

class Student : public Reseacher, public Mentor {
    public: 
        void learn(){
             cout<<"I can learn";
        }
};

int main(){
    Reseacher r;
    Student s;
    r.research();
    r.teach();
    s.guide();
    s.teach();
    s.learn();
    s.research();
    return 0;
};

