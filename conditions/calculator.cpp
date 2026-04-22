#include<iostream>
using namespace std;

int a,b;
char opr;
int res;

void logic(){
    if(opr=='+'){
        res=a+b;
    }
    else if(opr=='-'){
        res=a-b;
    }
    else if(opr=='*'){
        res=a*b;
    }
    else if(opr=='/'){
        res=a/b;
    }
    else{
        cout<<"Invalid Operator";
        exit(1);
    }
}

int main(){
    cout<<"Num1: ";
    cin>>a;
    cout<<"Num2: ";
    cin>>b;
    cout<<"Operator: ";
    cin>>opr;

    logic();
    cout<<a<<opr<<b<<" = "<<res;
}