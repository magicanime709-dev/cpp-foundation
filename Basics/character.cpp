#include<iostream>
using namespace std;
int main(){
    // char can only store a single character
    char nameCh='a';
    cout<<int(nameCh)<<endl; // ASCII value of a

    // String store word
    string nameStr="Shahadat";
    cout<<nameStr<<endl;

    // One way to use it as a sentense
    string nameStr2;
    cout<<"Name: ";
    cin>>nameStr2;
    cout<<nameStr2<<endl;
}