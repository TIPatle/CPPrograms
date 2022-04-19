// Merge k sorted arrays using heaps

#include <bits/stdc++.h>

using namespace std;

int main(){

    int k;
    cin>>k;

    vector <vector<int>> vec(k);

    for ( int i = 0; i<k; i++ ){
        
        int n;
        cin>>n;

        for ( int j = 0; j<n; j++ )
            cin>>vec[i][j];


    }

    vector <int> idx(k, 0);

    priority_queue<pair<int , vector<pair<int, int>>>, greater<pair<int, int>>> pq;

    for ( int i = 0; i<k; i++)
        pq.push( { vec[i][0], i });

    vector <int> ans;

    while ( !pq.empty() ){

        pair<int, int> x = pq.top();
        pq.pop();

        if ( idx[x.second]) + 1 < vec[x.second].size() )
            pq.push({vec[]})

    }

}