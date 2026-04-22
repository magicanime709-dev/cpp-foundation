#include<iostream>
using namespace std;

int x,y;

void logic(){
    // Given a point (x,y) find it's quadrant
    // Origin 
    if(x==0 and y==0){
        cout<<"("<<x<<","<<y<<")"<<" is in the origin";
    }
    // Axis
    else if(x>0 and y==0){
        cout<<"("<<x<<","<<y<<")"<<" is in +x axis";
    }
    else if(x<0 and y==0){
        cout<<"("<<x<<","<<y<<")"<<" is in -x axis";
    }
    else if(x==0 and y>0){
        cout<<"("<<x<<","<<y<<")"<<" is in +y axis";
    }
    else if(x==0 and y<0){
        cout<<"("<<x<<","<<y<<")"<<" is in -y axis";
    }

    // Quadrants
    // +,+ (1st Q)
    else if(x>0 and y>0){
        cout<<"("<<x<<","<<y<<")"<<" is in the 1st Quadrant";
    }
    // -,+ (2nd Q)
    else if(x<0 and y>0){
        cout<<"("<<x<<","<<y<<")"<<" is in the 2nd Quadrant";
    }
    // -,- (3rd Q)
    else if(x<0 and y<0){
        cout<<"("<<x<<","<<y<<")"<<" is in the 3rd Quadrant";
    }
    // +,- (4th Q)
    else if(x>0 and y<0){
        cout<<"("<<x<<","<<y<<")"<<" is in the 4th Quadrant";
    }
    else{
        cout<<"Invalid Type";
    }
}

int main(){
    cout<<"X: ";
    cin>>x;
    cout<<"Y: ";
    cin>>y;

    logic();
}