#include<iostream>
using namespace std;

void swap(int& x, int& y){ // Pass by referance < int& >

    // method 2 (without using another int)
    x=x+y; // X = 2+5 = 7
    y=x-y; // Y = 7-5 = 2(X)
    x=x-y; // X = 7-2 = 5(Y)

    // cout<<"X: "<<x<<endl;
    // cout<<"Y: "<<y<<endl;
}

int main(){
    int x=2;
    int y=5;

    // // method 1
    // int temp=x; // basicall holds the previous x value
    // x=y;
    // y=temp;

    // // method 2 (without using another int)
    // x=x+y; // X = 2+5 = 7
    // y=x-y; // Y = 7-5 = 2(X)
    // x=x-y; // X = 7-2 = 5(Y)

    swap(x,y);
    cout<<"X: "<<x<<endl;
    cout<<"Y: "<<y<<endl;
}