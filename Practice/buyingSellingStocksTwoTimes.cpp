#include <iostream>

using namespace std;



int main(){

    int n;
    cin>>n;

    int prices[n];
    for ( int i = 0; i<n; i++ )
        cin>>prices[i];

    cout<<maxProfit(prices, n)<<endl;

    return 0;

}