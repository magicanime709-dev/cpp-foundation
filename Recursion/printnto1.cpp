#include<iostream>
using namespace std;

void repeat(int n){
    static int sum=0;
    if(n==0) return;
    // repeat(n-1);
    // cout<<n<<endl;
    cout<<n<<endl;
    sum+=n;
    repeat(n-1); // starts repeating here without affecting the things below
    // if it works it works
    cout<<"Sum: "<<sum<<endl; 
    exit(1);
} // recursion replaces loop

int main(){
    repeat(6);
}