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


int main() {
    c_p_c();
    int n, m, cnt = 0;
    cin >> n >> m;

    vector<vector<int>> adj(n);
    vector<int> indeg(n, 0);

    int x, y;
    for (int i = 0; i < m; i++) {
        cin >> x >> y;
        adj[x].push_back(y);
        indeg[y]++;
    }
    queue<int> q;
    for (int i = 0; i < n; i++) {
        if (indeg[i] == 0) {
            q.push(i);
        }
    }

    while (!q.empty()) {
        cnt++;
        int x = q.front();
        q.pop();
        cout << x << " ";
        for (auto it : adj[x]) {
            indeg[it]--;
            if (indeg[it] == 0) q.push(it);
        }
    }

    return 0;
}