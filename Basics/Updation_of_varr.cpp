#include<iostream>
using namespace std;
int main(){
    int x=5;
    cout<<x<<endl;
    cout<<"Hi\n";
    // Now x is 8
    x=8;
    cout<<x<<endl;

    // x=8+7
    // x=x+7; // // does the same
    x+=7;
    cout<<x<<endl;
}