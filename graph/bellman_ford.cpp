
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

const int N = 1e5 + 6;
const int INF = 1e9;

int32_t main() {
    c_p_c();
    int n, m;
    cin >> n >> m;
    vector<vector<int>> edges;
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        edges.push_back({u, v, w});
    }

    int src; cin >> src;

    vector<int> dist(n, INF);
    dist[src] = 0;
    for (int i = 0; i < n - 1; i++) {
        for (auto e : edges) {
            int u, v, w;
            u = e[0], v = e[1], w = e[2];
            dist[v] = min(dist[v], w + dist[u]);
        }
    }

    for (auto i : dist) {
        cout << i << " ";
    }
    cout << endl;
}