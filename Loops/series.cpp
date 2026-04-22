#include<iostream>
using namespace std;

int main(){
    // 1,3,5,7,9 ...
    int n, ini, dif;
    cout<<"Initail: ";
    cin>>ini;
    cout<<"Difference: ";
    cin>>dif;
    cout<<"End: ";
    cin>>n;

    for(int i=ini; i<=n; i+=dif){
        cout<<i;
        if(i<n-dif){
            cout<<", ";
        }
    }
}