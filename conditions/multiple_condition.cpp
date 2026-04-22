#include<iostream>
using namespace std;
int main(){
    // Take a intiger and tell if it's a three digit number
    int a;
    cout<<"Num: ";
    cin>>a;

    if(a<0) a=-a;

    // if(a/100>=1 && a/100<10){
    if(a>99 && a<1000){
        cout<<"Num is Three digit";
    }
    else{
        cout<<"Not Three digit";
    }
}