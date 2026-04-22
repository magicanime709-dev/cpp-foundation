#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Namota of: ";
    cin>>n;

    for(int i=1; i<=n; i++){
        if(i>20){
            cout<<"The limit is 20";
            break;
        }
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    }
}