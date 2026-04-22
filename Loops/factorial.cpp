#include<iostream>
using namespace std;

int main(){
    // 5! = 5*4*3*2*1
    int n;
    cout<<"Num: ";
    cin>>n;
    if(n<0){
        cout<<"<Factorial is undefined for negative>"<<endl;
        return 0;
    } 
    if(n>13){
        cout<<"<Use a smaller number>";
        return 0;
    }

    // Descending order
    for(int k=n; k>0; k--){
        cout<<k<<"! = ";
        int fact=1;
        for(int i=k; i>0; i--){
            cout<<i;
            if(i>1) cout<<"*";
            fact*=i;
        }
        cout<<" = "<<fact<<endl;
    }
}