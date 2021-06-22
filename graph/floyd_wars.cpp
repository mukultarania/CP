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

int INF = 1e9;

int32_t main() {
    c_p_c();
    vector<vector<int>> graph = {
        {0, 5,  INF, 10},
        {INF, 0 , 3, INF},
        {INF, INF, 0 , 1},
        {INF, INF, INF, 0}
    };
    int n = graph.size();
    vector<vector<int>> dist = graph;
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (dist[i][k] + dist[k][j] < dist[i][j]) {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (dist[i][j] == INF) cout << "INF" << " ";
            else  cout << dist[i][j] << " ";
        }

        cout << endl;
    }

}