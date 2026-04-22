#include<iostream>
using namespace std;

int main(){
    int n=99, temp, product=1;
    cout<<"Num: ";
    cin>>n;

    while(n>0){
        temp=n%10;
        product*=temp;
        n/=10;
    }
    cout<<"Product: "<<product;
}