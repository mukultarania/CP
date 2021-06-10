// 7
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
int32_t main() {
    c_p_c();
    int x, y;
    cin >> x >> y;
    int n, m;
    int arr[x + 1][y + 1];
    memset(arr, 0, sizeof(arr));
    for (int i = 0; i < x; i++) {
        cin >> n >> m;
        arr[n][m] = 1;
        arr[m][n] = 1;
    }

    for (int i = 0; i <= x; i++) {
        for (int j = 0; j <= x; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    // std::vector<char> v;
    // std::vector<vector<int>> v[100];
    // for (int i = 0; i < x + 1; i++) {
    //     cin >> n >> m;
    //     v[n].push_back(m);
    //     v[m].push_back(n);
    // }
    // for (int i = 1; i < x + 1; i++) {
    //     cout << i << " -> ";
    //     vector<int> :: iterator it;
    //     for (it = v[i].begin(); it != v[i].end(); it++) cout << *it << " ";
    //     cout << endl;
    // }

    return 0;
}