#include<iostream>
using namespace std;

int main(){
    // string str="Yagami";
    string str;
    cout<<"Name: ";
    cin>>str;

    int len=str.length();
    // Lower casing all character
    for(int i=0; i<len; i++){
        str[i]=tolower(str[i]);
    }
    // String reverse logic
    for(int i=0; i<len/2; i++){
        char temp=str[i];
        str[i]=str[len-1-i];
        str[len-1-i]=temp;
    }

    str[0]=toupper(str[0]);
    cout<<"Eman: "<<str;
}