#include<iostream>
#include<math.h>
using namespace std;

void sum(int a, int b){
    cout<<"Sum : "<<a+b<<endl;
    cout<<"Pow : "<<pow(a,b)<<endl;
    cout<<"CubeRoot: "<<cbrt(b)<<endl;
}

int main(){
    // int a,b;
    // cout<<"Num1: "; cin>>a;
    // cout<<"Num2: "; cin>>b;

    sum(3,5);
}