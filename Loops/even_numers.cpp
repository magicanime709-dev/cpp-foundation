#include<iostream>
using namespace std;

int main(){
    int n=10;
    cout<<"Num: ";
    cin>>n;
    int total=0, sum=0;

    for(int i=1; i<=n; i++){
        if(i%2==0){
            cout<<i<<endl;
            sum+=i;
            total++;
        }
        if(i>1000){
            break;
        }
    }
    cout<<"Sum of even num: "<<sum<<endl;
    cout<<"Total even num: "<<total;
}