#include<iostream>
using namespace std;

int pow(int a, int b){
    if(b==0) return 1;
    // if(b%2!=0){

    // }
    return a*(pow(a, b/2)+pow(a, b/2)); // basic math they say

    // Never mind
}

int main(){
    int a,b;
    cout<<"a: "; cin>>a;
    cout<<"b: "; cin>>b;
    cout<<"Pow: "<<pow(a,b)<<endl;
}