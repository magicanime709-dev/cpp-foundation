#include<iostream>
using namespace std;

int main(){
    // 2 matrices can be add if they have same dimension
    // int a=2,b=3,c=2,d=3;
    int a,b,c,d;
    // int arr1[a][b]={{2,4,6},{3,5,6}};
    cout<<"row: "; cin>>a;
    cout<<"col: "; cin>>b;
    int arr1[a][b];
    cout<<"Arr1: ";
    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            cin>>arr1[i][j];
        }
    }
    // int arr2[c][d]={{4,6,7},{7,5,4}};
    cout<<"row: "; cin>>c;
    cout<<"col: "; cin>>d;
    int arr2[c][d]; 
    cout<<"Arr2: ";
    for(int i=0; i<c; i++){
        for(int j=0; j<d; j++){
            cin>>arr2[i][j];
        }
    }

    if(a!=c or b!=d){
        cout<<"<Dimensions aren't equal>";
        return 0;
    }
    // Sum
    cout<<"SumArr: ";
    for(int i=0; i<a; i++){
        if (i!=0) cout<<"        ";
        for(int j=0; j<b; j++){
            cout<<arr1[i][j]+arr2[i][j]<<" ";
        }
        cout<<endl;
    }
}
