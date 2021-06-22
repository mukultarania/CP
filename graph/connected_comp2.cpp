// Link - https://www.youtube.com/watch?v=nY-VMGp72NI&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=160&ab_channel=ApnaCollege

//GRAPH
// 10 7
// 0 1
// 2 3
// 0 4
// 0 5
// 0 6
// 7 8
// 9 1

// There are N friends numbered from 0 - N-1. You have to chose 2 persons such that
// they are not related to each other.
// You are given information in the form of M pairs (X, Y) i.e there is link between the
// friends X and Y.
// Find out the number of ways in which 2 persons from the 2 different groups can be chosen.

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
vector<vector<int>> adj;
vector<bool> vis;
vector<int> comp;

//To Print Graph
void printGraph(int n) {
    for (int i = 0; i < n ; i++) {
        cout << i << " -> ";
        for (auto j : adj[i]) cout << j << " ";
        cout << endl;
    }
    cout << endl;
}

//take input
void inputGraph(int m) {
    int x, y;
    for (int i = 0; i < m; i++) {
        cin >> x >> y;
        //For Undirected Graph
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
}

int get_comp(int idx) {
    if (vis[idx]) return 0;
    vis[idx] = true;
    int ans = 1;
    for (auto i : adj[idx]) {
        if (!vis[i]) {
            ans += get_comp(i);
            vis[i] = true;
        }
    }
    return ans;
}

int main() {
    c_p_c();
    int n, m;
    cin >> n >> m;

    adj = vector<vector<int>>(n);
    vis = vector<bool>(n, 0);

    //Input Graph
    inputGraph(m);
    //To check edges of Graph
    printGraph(n);

    for (int i = 0; i < n; i++) {
        if (!vis[i])
            comp.push_back(get_comp(i));
    }

    //Get Ans
    long long int ans = 0;
    for (auto i : comp) {
        ans += i * (n - i);
    }
    cout << "Total Number of Ways is " << ans / 2;

}