#include<iostream>
using namespace std;
int main(){
    // Print the absolute value
    int a;
    cout<<"Num: ";
    cin>>a;

    // if(a<0){
    //     cout<<"Abs: "<<-(a);
    // }
    // else{
    //     cout<<"Abs: "<<a;
    // }

    if(a<0) a=-a;
    cout<<"Abs: "<<a;
}