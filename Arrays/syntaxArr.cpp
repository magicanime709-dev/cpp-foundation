#include<iostream>
using namespace std;

int main(){
    // 5 intiger 
    int arr[5];
    // arr[0]=6; // set
    // arr[1]=3;
    // arr[2]=4;
    // arr[3]=6;
    // arr[4]=7;

    cout<<"Arr: ";
    for(int i=0; i<=4; i++){
        cin>>arr[i];
    }
    cout<<"Out: ";
    for(int i=0; i<=4; i++){
        cout<<arr[i]<<" ";
    }

    // cout<<arr[0]<<endl;
    // cout<<arr[1]<<endl;
    // cout<<arr[2]<<endl;
    // cout<<arr[3]<<endl;
    // cout<<arr[4]<<endl;
}