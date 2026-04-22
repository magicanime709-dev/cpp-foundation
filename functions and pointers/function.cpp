#include<iostream>
using namespace std;

string reply;

void greeting(){
     cout<<"Hello, sir"<<endl;
     cout<<"I respectfully fuck you!"<<endl;
}

void loop(){
    int len=reply.length();
    for(int i=1; i<=len; i++){
        greeting();
    }
}

void repeat(){
    while(true){ // while repeat is being called
        cin>>reply;
        if(reply=="stop" || reply=="Stop") break;
        loop();
    }
}

int main(){
    greeting();
    repeat();
    cout<<"<Alright>"<<endl;
}