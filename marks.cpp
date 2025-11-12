#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    //no.of  students input vetor of marks add 3 marks.. display marks and then average of those marks
    vector<int> marks; //vector declared <datatype> vector name
    int n, value; //number of students n, and marks is value

    cout<<"Enter no. of Students: ";
    cin>>n;

    for(int i = 0; i < n; i++){
        cout<<"Enter marks of Student "<<i+1<<endl; //start from first student
        cin>>value;
        marks.push_back(value); //index 0
    }

    
    cout<<"Student marks: "<<endl;

    for(int n : marks){
        cout<<n<<" "; //space 
    }

    float sum = 0;
    for(int m : marks){
        sum += m;
    }
    // cout<<(sum / marks.size()); //expression in cout should be in paranthesis or put space between /

    float result = sum/marks.size();
    cout<<"Result: "<<result;

    return 0;

}