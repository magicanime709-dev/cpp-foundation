#include<iostream>
using namespace std;

int x,y;
string location;

// Find the Quadrant
void logic(){
    if(x==0 and y==0) location="origin";
    else if(y==0) location=(x>0)? "+x axis":"-x axis";
    else if(x==0) location=(y>0)? "+y axis":"-y axis";
    else if(x>0 and y>0) location="1st Quadrant";
    else if(x<0 and y>0) location="2nd Quadrant";
    else if(x<0 and y<0) location="3rd Quadrant";
    else if(x>0 and y<0) location="4th Quadrant";
    else cout<<"Invalid Type";
}

int main(){
    cout<<"X: ";
    cin>>x;
    cout<<"Y: ";
    cin>>y;

    logic();
    cout<<"("<<x<<","<<y<<")"<<" is in the "<<location;
}
