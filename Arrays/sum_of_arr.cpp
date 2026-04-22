#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int len=sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    
    cout<<"Arr: ";
    for(int i=0; i<len; i++){
        cout<<arr[i]<<" ";
        sum+=i;
    }
    cout<<"\nSum: "<<sum<<endl;
}