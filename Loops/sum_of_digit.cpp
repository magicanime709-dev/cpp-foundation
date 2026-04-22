#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Num: ";
    cin>>n;

    int temp;
    int sum=0;

    while(n>0){
        temp=n%10;
        sum=sum+temp;
        n=n/10;
    }
    cout<<"Sum: "<<sum;
}