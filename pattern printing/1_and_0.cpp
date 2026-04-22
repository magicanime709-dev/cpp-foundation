#include<iostream>
using namespace std;

int main(){
    int n=4;
    bool temp=true;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){ // j <= i
            if((i+j)%2==0){
                cout<<"1 ";
            } else{
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
}