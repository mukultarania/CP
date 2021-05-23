//Test Case
// 2
// 7
// noobz 1
// llamas 2
// Winn3rz 2
// 5thwheel 1
// NotoricCoders 5
// StrangeCase 7
// WhoKnows 7
// 3
// ThreeHeadedMonkey 1
// MoscowSUx13 1
// NeedForSuccess 1
// Output : 
// 5 
// 3
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(pair<string, int> p1, pair<string, int> p2)
{
    return p1.second < p2.second;
}

int main()
{
    // your code goes here
    long long int t;
    cin >> t;
    vector<pair<string, int>> v;
    while (t--)
    {
        long long int n;
        long long int err = 0;
        long long int rank = 1;
        cin >> n;

        for (long long int i = 0; i < n; i++)
        {
            string x;
            int y;
            cin >> x >> y;
            v.push_back(make_pair(x, y));
        }
        sort(v.begin(), v.end(), compare);

        for (long long int i = 0; i < n; i++)
        {
            err += abs(v[i].second - rank);
            rank++;
        }
        cout << err << endl;
        v.clear();
    }
    return 0;
}