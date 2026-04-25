#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>a={1,2,5,6,4};
    int len=a.size();
    cout<<"size: "<<len<<endl;

    cout<<"arr: ";
    for(int i: a){
        cout<<i<<" ";
    }
}