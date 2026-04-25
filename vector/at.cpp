#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>vec;
    vec.push_back(25); // pushes at the end
    vec.push_back(35);
    vec.push_back(45);
    cout<<"size: "<<vec.size()<<endl<<"arr: ";

    cout<<vec.at(0)<<" "; // to access specific element
    cout<<vec.at(1);
}