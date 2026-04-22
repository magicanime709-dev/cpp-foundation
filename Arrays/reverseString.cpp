#include<iostream>
using namespace std;

int main(){
    string str;
    cout<<"Name: "; cin>>str;
    int len=str.length();

    cout<<"Reversed: ";
    for(int i=0; i<len; i++){
        str[i] = tolower(str[i]);
        str[len-1] = toupper(str[len-1]);
        cout<<str[len-1-i];
    }
}