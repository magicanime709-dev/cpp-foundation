#include<iostream>
using namespace std;

int pow(int a, int b){
    if(b==0) return 1;
    return a*pow(a, b-1); // basic math they say
}

int main(){
    int a,b;
    cout<<"a: "; cin>>a;
    cout<<"b: "; cin>>b;
    cout<<"Pow: "<<pow(a,b)<<endl;
}