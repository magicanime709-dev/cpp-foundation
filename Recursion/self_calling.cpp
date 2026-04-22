#include<iostream>
using namespace std;

void greet(int n){
    if(n==0) return;
    cout<<"Hey"<<endl;
    greet(n-1); // function callig itself (Resembles infinite loop but stops with error after a while)
}

int main(){
    greet(3);
}