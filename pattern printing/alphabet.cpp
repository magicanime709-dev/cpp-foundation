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
        for(int j=65; j<65+m; j++){
            cout<<char(j)<<" ";
        }
        cout<<endl;
    }
}