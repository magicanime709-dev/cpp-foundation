#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,4,3,5,3,4,2,1};
    int len=sizeof(arr)/sizeof(arr[0]);
    bool isPalindrome=true;

    for(int i=0; i<len; i++){
        cout<<arr[len-1-i]<<" ";
    } cout<<endl;

    // Palindrome check
    for(int j=0; j<len/2; j++){
        if(arr[j] != arr[len-1-j]) isPalindrome=false;
    }
    if(isPalindrome) cout<<"<Palindrome Array>"<<endl;
}