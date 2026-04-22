#include<iostream>
using namespace std;

int main(){
    int m=5,n=5;
    // cout<<"row: "; cin>>m; // row
    // cout<<"col: "; cin>>n; // column
    // m * n
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            if(i==j || (i+j)==n+1){ // (i+j)==n+1
                cout<<"* ";
            } else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}