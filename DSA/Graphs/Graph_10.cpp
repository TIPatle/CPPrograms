#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> adj;
vector<bool> visited;
vector<int> component;

int get_comp ( int idx ){

    if ( visited[idx] )
        return 0;

    visited[idx] = 1;
    int ans = 1;

    for ( auto it : adj[idx] )
        if ( !visited[it] ){

            ans += get_comp(it);
            visited[it] = 1;

        }

    return ans;

}

int main(){

    int n, m;
    cin>>n>>m;

    adj = vector<vector<int>> (n);
    visited = vector<bool> (n, 0);

    for ( int i = 0; i<m; i++ ){

        int x, y;
        cin>>x>>y;

        adj[x].push_back(y);
        adj[y].push_back(x);

    }

    for ( int i = 0; i<n; i++ ){

        if ( !visited[i])
            component.push_back(get_comp(i));

    }

    int a = 0;
    for ( auto it : component )
        a += (it * (n-it));  // why it * (n-it) :- to find no of 2 person out of n
                           // nC2 = n!/ 2 * (n-2)! = n *( n-i)
    cout<<a/2<<endl;

    return 0;

}