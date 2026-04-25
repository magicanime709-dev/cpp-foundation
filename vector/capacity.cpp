#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>a;
    a.push_back(5);
    a.push_back(3);
    a.push_back(9);
    a.push_back(3);
    a.push_back(9);

    cout<<"size: "<<a.size()<<endl;
    cout<<"capacity: "<<a.capacity()<<endl; // how much it can store < doubles in each overflow >
}