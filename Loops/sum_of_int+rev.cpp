#include <iostream>
using namespace std;

int main()
{
    int n = 247;
    
    // Main
    cout<<"Main: "<<n<<endl;
    int sum = 0, rem;
    while (n > 0)
    {
        rem = n % 10;
        sum += rem;
        n /= 10;
    }
    cout<<"Sum of main+revr: "<< sum*2<<endl;
}