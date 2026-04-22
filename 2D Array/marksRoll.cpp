#include<iostream>
using namespace std;

int main(){
    string str[]={"Shahadat", "Rohid", "Rashed", "Asif"};
    int len=sizeof(str)/sizeof(str[0]);

    int r=1,c=2;
    // cout<<"Row: "; cin>>r;
    // cout<<"Col: "; cin>>c;
    int arr[len][r][c]; // It's a 3D array btw
    
    // Input
    for(int k=0; k<len; k++){
        cout<<"Roll and mark of "<<str[k]<<": ";
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                cin>>arr[k][i][j];
            }
        }
    }
    cout<<endl;
    // Output
    for(int k=0; k<len; k++){
        cout<<str[k]<<": ";
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                cout<<arr[k][i][j]<<" ";
            }
            cout<<endl;
        }
    }
    // int arr[4][2]={{76,81},{45,23},{34,24},{54,65}};
}