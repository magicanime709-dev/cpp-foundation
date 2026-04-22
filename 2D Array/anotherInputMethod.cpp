#include<iostream>
using namespace std;

int main(){
    // int arr[3][3]={{1,2,3}, {4,5,6}, {7,8,9}};
    // I can leave the row area "BLANK" and it'd still work as it pairs column and automatically detect row but column is mandatory
    int arr[][3]={{1,2,3}, {4,5,6}, {7,8,9}}; 
    // Array of array is 2D array
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}