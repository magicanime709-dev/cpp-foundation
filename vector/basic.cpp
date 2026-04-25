#include<iostream>
#include<vector>
using namespace std;

int main(){
    // vector<int>a={1,2,3}; // dynamically adjusting array size
    vector<char> a(5,'a'); // a has size 5 and each block contains 0
    vector<char> b={'a','b','c','d','e'};
    // int len=a.size();
    // for(int i=0; i<len; i++){
    //     cout<<a[i]<<" ";
    // }
    for(char i:a){ // for each loop
        cout<<i<<" ";
    } cout<<endl;
    for(char i:b){ // for each loop
        cout<<i<<" ";
    }
}
