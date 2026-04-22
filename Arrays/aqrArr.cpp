#include<iostream>
using namespace std;

int main(){
    int n, arr[n];
    
    cout<<"Arr In: "; cin>>n;
    for(int i=0; i<n; i++){
        arr[i]=(i+1)*(i+1);
    }
    cout<<"Arr Out: ";
    for(int j=0; j<n; j++){
        cout<<arr[j]<<" ";
    }
}