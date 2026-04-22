#include<iostream>
using namespace std;

int main(){
    int a=2, b=3;
    int arr[a][b]={{1,6,3},{4,12,7}};
    int maxArr=arr[0][0];

    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            if(arr[i][j]>maxArr){
                maxArr=arr[i][j];
            }
        }
    } 
    cout<<"Largest of matrix: "<<maxArr;
}