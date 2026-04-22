#include<iostream>
using namespace std;

int a,b;

void profit(){
    if(a==b){
        cout<<"No profit No loss";
    }
    else if(a<b){
        cout<<"Profit: ";
    }
    else{
        cout<<"Loss: ";
    }
}

void amount(){
    int res=a-b;
    if (res==0) return; // stops right here
    if(res<0) res=-res;
    cout<<res;
}

int main(){
    // Profit or loss
    cout<<"Buy: ";
    cin>>a;
    cout<<"Sell: ";
    cin>>b;

    profit();
    amount();
}