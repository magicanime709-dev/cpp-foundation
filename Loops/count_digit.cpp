#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Num: ";
    cin>>n;
    int len=0;
    
    while(n>0){
        n=n/10;
        len++;
    }

    cout<<"Length: "<<len;
}