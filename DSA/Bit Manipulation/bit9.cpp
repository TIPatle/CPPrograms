// Xor of all subset 

#include <iostream>

using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];
    for ( int i = 0; i<n; i++ )
        cin>>arr[i];

    if ( n == 1)
        cout<<arr[0]<<endl;
    
    else 
        cout<<0<<endl;

    return 0;

}