#include<iostream>
using namespace std;

void change (int arr[]){ // receives the arr
    arr[0]={5}; // it'll change the main arr cause arr is pass by referance not pass by value
}

int main(){
    int arr[5]={1,2,3,4,5};
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    change(arr); // pass the arr
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
}