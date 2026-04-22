#include<iostream>
using namespace std;

int main(){
    int n=4, a=1;
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){ // j <= i
            cout<<a<<"  ";
            a++;
        }
        cout<<endl;
    }
}