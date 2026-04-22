#include<iostream>
using namespace std;

int fact(int x){ // that x is basically n/r which is i/j
    int fact=1;
    for(int i=1; i<=x; i++){
        fact*=i;
    }
    return fact;
}

int ncr(int n, int r){ // that n is basically i and r is j
    // combination
    int ncr=fact(n)/(fact(r)*fact(n-r));
    return ncr;
}

int main(){
    int n;
    cout<<"End Num: "; cin>>n;

    // triangle
    for(int i=0; i<=n; i++){
        // spaces
        for(int j=0; j<=n-i; j++){
            cout<<"  "; // 2 space
        }
        // pascal num
        for(int j=0; j<=i; j++){
            cout<<ncr(i,j)<<"   "; // 3 space
        }
        cout<<endl;
    }
}