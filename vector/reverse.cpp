#include<iostream>
#include<vector>
using namespace std;

void reverse(vector<int>vec){
    int len=vec.size();
    // main output
    cout<<"vec: ";
    for(int i: vec){
        cout<<i<<" ";
    } cout<<endl;
    // reverse
    for(int i=0; i<len/2; i++){
        swap(vec[i], vec[len-1-i]);
    }
    // reverse output
    cout<<"rev: ";
    for(int j: vec){
        cout<<j<<" ";
    } cout<<endl;
}

int main(){
    vector<int>vec={1,24,5,6,7,8};
    reverse(vec);
}