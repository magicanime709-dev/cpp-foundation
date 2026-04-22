#include<iostream>
using namespace std;

int fact(int x){
    int fact=1;
    for(int i=1; i<=x; i++){
        fact*=i;
    }
    return fact;
}

int main(){
    int n, r;
    cout<<"n: "; cin>>n;
    cout<<"r: "; cin>>r;
    
    int a=fact(n);
    int b=fact(r);
    int c=fact(n-r);

    cout<<"nCr = "<<a/(b*c);
}