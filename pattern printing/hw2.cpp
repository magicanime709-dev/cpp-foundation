#include<iostream>
using namespace std;

int main(){
    int m;
    cout<<"Num: "; cin>>m;
    if(m>26){
            cout<<"<Keep it within 26>";
            return 0;
    }

    for(int i=1; i<=m; i++){
        for(int j=1; j<=m; j++){
            cout<<char(i+96)<<" "; // converts to a
        }
        cout<<endl;
    }
}