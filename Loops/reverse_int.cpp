#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Num: ";
    cin>>n;

    if(n==0){
        cout<<"Reversed: 0";
        return 0;
    } 

    if(n<0){
        n=-n;
        cout<<"Reversed: -";
    } else{
         cout<<"Reversed: ";
    }
   
    int rem;
    while(n>0){
        rem=n%10;
        cout<<rem;
        n/=10;
    }
}