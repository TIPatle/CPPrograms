#include <iostream>

using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];
    for ( int i = 0; i<n; i++ )
        cin>>arr[i];

    int diff;
    cin>>diff;

    int sum = 0;
    for ( int i = 0; i<n; i++ )
        sum += arr[i];

    int k = (sum - diff) / 2;

    int dp[n+1][k+1];
    for ( int i = 0; i<=n; i++ ){

        for ( int j = 0; j<=k; j++ ){

            if ( i == 0 )   
                dp[i][j] = 0;

            if ( j == 0 )
                dp[i][j] = 1;

            if ( i > 0 ){

                if ( j >= arr[i-1])
                    dp[i][j] = dp[i-1][j] + dp[i-1][j-arr[i-1]];

                else 
                    dp[i][j] = dp[i-1][j];

            }

        }

    }

    cout<<dp[n][k]<<endl;

    return 0;

}