#include<iostream>
using namespace std;

void repeat(int n){
    if(n==0) return;
    static int temp=1;
    cout<<temp<<endl;
    temp++;
    repeat(n-1);
} // recursion replaces for loop

int main(){
    repeat(6);
}