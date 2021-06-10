//GRAPH
// 4 3
// 0 1
// 1 2
// 2 3

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

bool iscycle_und(int src, vector<vector<int>>& adj, vector<bool>&vis, int parent) {
    vis[src] = true;
    for (auto it : adj[src]) {
        if ( it != parent) {
            if (vis[it]) {
                return true;
            }
            if (!vis[it] && iscycle_und(it, adj, vis, src)) return true;
        }
    }
    return false;
}

bool iscycle_dir(int src, vector<vector<int>>& adj, vector<bool>&vis, vector<int>& st) {
    st[src] = true;
    if (!vis[src]) {
        vis[src] = true;
        for (auto i : adj[src]) {
            if (!vis[i] && iscycle_dir(i, adj, vis, st)) return true;
            if (st[i]) return true;
        }
    }
    st[src] = false;
    return false;
}

void cycle_status(bool cycle) {
    if (cycle)
        cout << "cycle is present" << endl;
    else
        cout << "cycle is not present" << endl;
    cout << endl;
}

//To Print Graph
void printGraph(vector<vector<int>> bdj, int n) {
    for (int i = 0; i < n ; i++) {
        cout << i << " -> ";
        vector<int> :: iterator it;
        for (it = bdj[i].begin(); it != bdj[i].end(); it++) cout << *it << " ";
        cout << endl;
    }
}

int main() {
    c_p_c();
    int n, m;
    cin >> n >> m;

    vector<vector<int>> adj(n);
    vector<bool> vis(n, false);

    int x, y;
    for (int i = 0; i < m; i++) {
        cin >> x >> y;
        //For Undirected Graph
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    //To check edges of Graph
    printGraph(adj, n);

    // For Un - Directed Graph
    bool cycle = false;

    for (int i = 0; i < n; i++) {
        if (!vis[i] && iscycle_und(i, adj, vis, -1)) {
            cycle = true;
        }
    }
    cycle_status(cycle);

    // //For Directed Graph
    cin >> n >> m;
    vector<vector<int>> bdj(n);
    for (int i = 0; i < m; i++) {
        cin >> x >> y;
        //For Directed Graph
        bdj[x].push_back(y);
    }

    //To check edges of Graph
    printGraph(bdj, n);

    cycle = false;
    vector<int> st(n, 0);
    vector<bool> visi(n, 0);
    for (int i = 0 ; i < n; i++) {
        if (!visi[i] && iscycle_dir(i, bdj, visi, st)) {
            cycle = true;
        }
    }
    cycle_status(cycle);

    return 0;
}