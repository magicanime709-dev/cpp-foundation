#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,4,6,8,9,6};
    int len=sizeof(arr)/sizeof(arr[0]);
    int sum1=0, sum2=0;

    for(int i=0; i<len; i++){
        if(i%2==0) sum1+=arr[i];
        else sum2+=arr[i];
    } 
    cout<<"Sum of even: "<<sum1<<endl;
    cout<<"Sum of odd: "<<sum2<<endl;
}