
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
    vector<vector<pair<int, int>>> graph(n + 1);
    vector<int> dist(n + 1, INF);

    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].push_back({v, w});
        graph[v].push_back({u, w});
    }

    int src; cin >> src;

    dist[src] = 0;
    set<pair<int, int>> s;
    s.insert({0, src});

    while (!s.empty()) {
        auto x = *(s.begin());
        s.erase(x);
        for (auto it : graph[x.second]) {
            if (dist[it.first] > dist[x.second] + it.second) {
                s.erase({dist[it.first], it.first});
                dist[it.first] = dist[x.second] + it.second;
                s.insert({dist[it.first], it.first});
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        if (dist[i] < INF) {
            cout << dist[i] << " ";
        } else {
            cout << -1 << " ";
        }
    }
}