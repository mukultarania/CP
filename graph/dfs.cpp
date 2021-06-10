//GRAPH
// 7 7
// 1 2
// 1 3
// 2 4
// 2 5
// 2 6
// 2 7
// 7 3

#include<bits/stdc++.h>
using namespace std;

void c_p_c()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

const int N = 1e5 + 2;
bool vis[N];
vector<int> adj[N];

void dfs(int node) {
    //Pre Order
    vis[node] = 1;
    cout << node << endl;

    //Inorder
    vector<int> :: iterator it;
    for (it = adj[node].begin(); it != adj[node].end(); it++) {
        if (vis[*it]);
        else {
            dfs(*it);
        }
    }

    //PostOrder
}

int main() {
    c_p_c();
    for (int i = 0; i < N; i++) vis[i] = 0;
    int n, m;
    cin >> n >> m;
    int x, y;
    for (int i = 0; i < m; i++) {
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    for (int i = 0; i <= n ; i++) {
        cout << i << " -> ";
        vector<int> :: iterator it;
        for (it = adj[i].begin(); it != adj[i].end(); it++) cout << *it << " ";
        cout << endl;
    }

    //DFS
    cout << "\nDFS" << endl;
    dfs(1);

    return 0;
}