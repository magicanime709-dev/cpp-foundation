#include<iostream>
using namespace std;

int fact(int n){
    // 5*4*3*2*1
    if(n==0 || n==1) return 1;
    return n*fact(n-1);
}

int main(){
    cout<<fact(0);
}