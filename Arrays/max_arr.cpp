#include<iostream>
using namespace std;

int main(){
    int arr[]={-1,-2,-3};
    int len=sizeof(arr)/sizeof(arr[0]);
    int max=arr[0];
    
    // cout<<"Arr: ";
    for(int i=0; i<len; i++){
        if(arr[i]>max) max=arr[i];
    }
    cout<<max<<" is the greatest"<<endl;
}