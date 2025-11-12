#include<iostream>
#include<string>
#include<vector> //for vectors
using namespace std;



int main(){
    //arrays
    //fix size
    //int marks[5] = {1,2,3,4,5}; data type name of array and then the size

    //Vectors => Dynamic Arrays built in methods are beneficial like push_back pop thingy
    vector<int> nums; //vector declared <datatype> vector name

    nums.push_back(2); //index 0
    nums.push_back(3); //index 1
    nums.push_back(4); //index 2

    cout<<"Vector Elements: "<<endl;

    // cout<<nums[1];
    for(int i = 0; i < nums.size(); i++){
        cout<<nums[i]<<endl;
    }

    nums.pop_back(); //pops the last element 
    // for(int i = 0; i < nums.size(); i++){
    //     cout<<nums[i]<<endl;
    // }

    for(int n : nums){
        cout<<n<<endl;
    } //only iteration no indexing..gets each value, stores them in the variable and ouputs them
    return 0;
}