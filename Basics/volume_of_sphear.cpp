#include<iostream>
using namespace std;
int main(){
    float pi=3.14;
    float r;
    // Taking the input
    cout<<"Radius: "; // cout has <<
    cin>>r; // cin has >>

    float vol=(4/3)*pi*r*r*r;
    cout<<"Volume: ";
    cout<<vol;
}