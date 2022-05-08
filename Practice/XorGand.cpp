#include <bits/stdc++.h>

#define N 1e7
#define M 1e5

#define vi vector<int>
#define vii vector<pair<int, int>>
#define pii pair<int, int>

#define rep(i, a, b) for(int i = a; i<b; i++)
#define decrep(i, a, b) for ( int i = a; i>=b; i--)

using namespace std;



int main(){
    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        vi arr(n+1);
        for ( int i = 1; i<=n; i++ )
            cin>>arr[i];

        int q;
        cin>>q;

        while (q--){

            int l, r, x;
            cin>>l>>r>>x;

            int count = 0;
            for ( int i = l; i<=r; i++ ){
                if ( (arr[i] ^ x) > (arr[i] & x ))
                    count++;

            }

            cout<<count<<endl;

        }

    }


    return 0;

}