#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Num: ";
    cin>>a;

    if(a%5==0 || a%3==0){
        cout<<"Divisible by 5 or 3";
    }
    else{
        cout<<"Nope";
    }
}