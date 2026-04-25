#include<iostream>
#include<vector>
using namespace std;

int main(){
    // single number
    // leetCode Problem 136
    vector<int>vec={1,3,5,6,7,3,1,6};
    bool isRepeat;
    // print whatever doesn't repeat in vec
    cout<<"single: ";
    for(int i=0; i<vec.size(); i++){
        isRepeat=true;
        for(int j=0; j<vec.size(); j++){
            if(i!=j and vec[i]==vec[j]){
                isRepeat=false;
                break;
            }
        }
        if(isRepeat){
            cout<<vec[i]<<" ";
        }
    }
}