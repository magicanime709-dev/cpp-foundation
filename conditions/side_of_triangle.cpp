#include<iostream>
using namespace std;
int main(){
    // If it's a side of a triangle
    int a,b,c;
    cout<<"A: ";
    cin>>a;
    cout<<"B: ";
    cin>>b;
    cout<<"C: ";
    cin>>c;

    if((a+b)>c && (a+c)>b && (b+c)>a){
        cout<<"These can be sides of a Triangle";
    }
    else{
        cout<<"Nope";
    }
}