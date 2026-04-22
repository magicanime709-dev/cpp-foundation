#include<iostream>
using namespace std;

int main(){
    int arr[]={1,3,5,6};
    int len=sizeof(arr)/sizeof(arr[0]);
    // I have to reverse it without storing the value in another array
    // for(int i=0; i<len/2; i++){
    //     int temp=arr[i];
    //     arr[i]=arr[len-1-i];
    //     arr[len-1-i]=temp;
    // }
    // for(int i=0; i<len; i++){
    //     cout<<arr[i]<<" ";
    // }

    for(int i=0; i<len; i++){
        cout<<arr[len-1-i]<<" ";
    }
}