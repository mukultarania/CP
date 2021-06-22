
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
vector<int> parent(N);
vector<int> sz(N);

//Make Set
void make_set(int v) {
    parent[v] = v;
    sz[v] = 1;
}

//Find Set
int find_set(int v) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}

//Union
void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b) {
        if (sz[a] < sz[b])
            swap(a, b);
        parent[b] = a;
        sz[a] += sz[b];
    }

}

int main() {
    c_p_c();
    for (int i = 0; i < N; i++) {
        make_set(i);
    }

    int n, m;
    bool cycle = false;
    cin >> n >> m;
    vector<vector<int>> edges;
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        edges.push_back({u, v});
    }
    for (auto i : edges) {
        int u = i[0];
        int v = i[1];
        if (find_set(u) == find_set(v)) {
            cycle = true;
        } else {
            union_sets(u, v);
        }
    }

    if (cycle)
        cout << "Cycle is present in non-directed graph";
    else
        cout << "Cycle is not present in non-directed graph";
}