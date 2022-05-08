#include <bits/stdc++.h>

#define N 1e7
#define M 1e5

#define vi vector<int>
#define vii vector<vector<int>>
#define vpii vector<pair<int, int>>
#define pii pair<int, int>

#define rep(i, a, b) for(int i = a; i<b; i++)
#define decrep(i, a, b) for ( int i = a; i>=b; i--)

using namespace std;

vii adj(M);
vi vis(M, 0);
vi color(M, -1);

bool isbipartite( int i ){

    queue <int> q;
    q.push(i);
    vis[i] = 1;
    color[i] = 1;

    int ans = 1;

    while (!q.empty()){

        int node = q.front();
        q.pop();

        for ( auto it : adj[node] ){

            if ( !vis[it] ){

                q.push(it);
                vis[it] = 1;
                color[it] = !color[node];

            }

            else if ( color[it] == color[node] )
                ans = false;
        }

    }

    return ans;

}

int main(){
    
    int n, m;
    cin>>n>>m;

    rep(i, 1, m+1){

        int x, y;
        cin>>x>>y;

        adj[x].push_back(y);
        adj[y].push_back(x);

    }

    rep(i, 1, n+1){

        if (!vis[i])
            if (isbipartite(i))
                cout<<"Graph with starting with node "<<i<<" is Bipartite"<<endl;

            else 
                cout<<"Graph with starting with node "<<i<<" is not Bipartite"<<endl;
                

    }


    return 0;

}