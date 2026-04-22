#include<iostream>
using namespace std;

int main(){
    int x=3;
    int* p; // declare pointer
    p =&x; // to store the address of a datatype

    cout<<p<<endl;
    cout<<&x<<endl;
}