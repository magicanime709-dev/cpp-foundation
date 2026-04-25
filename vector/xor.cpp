#include<iostream>
#include<vector>
using namespace std;

int main(){
    // XOR cancels out the same number but keep the unique
    vector<int>vec={1,3,5,6,3,1,5,13};
    int ans=0;
    for(int val:vec){
        ans=ans^val; // XOR sign
    }
    cout<<ans<<" ";
}