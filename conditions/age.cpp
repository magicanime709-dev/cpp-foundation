#include<iostream>
using namespace std;

string a,b,c;
int e,f,g;

void youngest(){
    if(e<f && e<g){
        cout<<a<<" is the youngest";
    }
    else if(f<e && f<g){
        cout<<b<<" is the youngest";
    }
    else{
        cout<<c<<" is the youngest";
    }
}

int main(){
    // Youngest of the three
    cout<<"Name: ";
    cin>>a;
    cout<<"Age: ";
    cin>>e;
    cout<<"Name: ";
    cin>>b;
    cout<<"Age: ";
    cin>>f;
    cout<<"Name: ";
    cin>>c;
    cout<<"Age: ";
    cin>>g;

    youngest();
}