#include <iostream>
#include<cstring>
using namespace std;

#define ll long
ll pre[100005005], a[1000005];

int main() {
	// your code goes here
	int n;
	cin >> n;
	memset(pre, 0, sizeof(pre));
	pre[0] = 1;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
		sum %= n;
		sum = (sum + n) % n;
		pre[sum]++;
		// cout<<a[i]<<" ";cout<<sum<<endl;
	}
	int ans = 0;
	for (int i = 0; i < n; i++) {
		ll m = pre[i];
		ans += (m) * (m - 1) / 2;
	}
	cout << ans << endl;

	return 0;
}
