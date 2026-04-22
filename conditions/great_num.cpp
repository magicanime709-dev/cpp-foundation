#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"A: ";
    cin>>a;
    cout<<"B: ";
    cin>>b;
    cout<<"C: ";
    cin>>c;

    if(a>b && a>c){
        cout<<a<<" is the greatest";
    }
    else if(b>a && b>c){
        cout<<b<<" is the greatest";
    }
    else{
        cout<<c<<" is the greatest";
    }
}