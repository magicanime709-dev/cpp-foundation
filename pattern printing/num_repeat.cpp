#include<iostream>
using namespace std;

int main(){
    int m;
    cout<<"Num: "; cin>>m;

    for(int i=1; i<=m; i++){
        for(int j=1; j<=m; j++){
            cout<<i<<" "; // using i in j
        }
        cout<<endl;
    }
}