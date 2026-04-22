#include<iostream>
using namespace std;

int main(){
    int x=3, y=6;
    cout<<&x<<endl; // prints the address it took in ram (Each run takes different address)
    // 0x50ba9ff65c
    // 0x442b9ff66c
    // 0xb774bff9ac
    cout<<&y<<endl;
    // Address x: 0xb774bff9ac
    // Address y: 0xf5cb3ffbe8
}