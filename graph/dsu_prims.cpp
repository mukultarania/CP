
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
int m, n;
// Vector for ADJ List
vector<vector<int>> g[N];
int cost = 0;
vector<int> dist(N), parent(N);
vector<bool> vis(N);

void printMST(int source) {
    //Putting distance to maximum
    for (int i = 1; i < n; i++) {
        dist[i] = INF;
    }

    set<vector<int>> s;
    dist[source] = 0;
    //Adding first vertex into the set
    s.insert({0, source});
    cout << "u v w" << endl;

    while (!s.empty()) {
        auto x = *(s.begin());
        s.erase(x);
        //Marking node visited
        vis[x[1]] = true;
        // u->child v->parent w->weight
        int u = x[1];
        int v = parent[x[1]];
        int w = x[0];
        cout << u << " " << v << " " << w << endl;
        cost += w;

        for (auto it : g[x[1]]) {
            if (vis[it[0]]) {
                continue;
            }
            if (dist[it[0]] > it[1]) {
                s.erase({dist[it[0]], it[0]});
                dist[it[0]] = it[1];
                s.insert({dist[it[0]], it[0]});
                parent[it[0]] = x[1];
            }
        }
    }
}

void printGraph() {
    for (int i = 0; i <= n ; i++) {
        cout << i << " -> ";
        for (auto it : g[i]) {
            cout << "{" << it[0] << " " << it[1] << "}";
        }
        cout << endl;
    }
}

int main() {
    c_p_c();
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int x, y, w;
        cin >> x >> y >> w;
        g[x].push_back({y, w});
        g[y].push_back({x, w});
    }

    printGraph();
    cout << endl;
    //Start from node 0
    printMST(0);

    cout << "Minimum Cost is " << cost << endl;
}