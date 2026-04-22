#include<iostream>
using namespace std;

int main(){
    string s="Raghab";
    cout<<s<<" "<<s.length()<<endl;
    // s=s+"Berg"; // adds things like append
    s="Berg"+s; // adds things like append
    cout<<s<<" "<<s.length()<<endl;
}