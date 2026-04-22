#include<iostream>
using namespace std;

int main(){
    string str;
    cout<<"Str: "; getline(cin, str);
    int len=str.length();
    int sum=0;
    
    for(int i=0; i<len; i++){
        str[i]=tolower(str[i]);
        if(str[i]=='a' or str[i]=='e' or str[i]=='i' or str[i]=='o' or str[i]=='u') sum++;
    }
    cout<<"Vwl: "<<sum;
}