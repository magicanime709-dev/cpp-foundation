#include<iostream>
using namespace std;

int main(){
    int n=5;
    cout<<"Row: "; cin>>n;

    if(n>19){
        cout<<"<Not that much>";
        return 0;
    }
    if(n%2==0){
        cout<<"<Enter an odd number>";
        return 0;
    }

    int mid=(n/2)+1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==mid || j==mid){
                cout<<"* "; // single space
            } else{
                cout<<"  "; // double space
            }
        }
        cout<<endl;
    }
}