#include <bits/stdc++.h>
using namespace std;

#define int long long // ~long long man~

int n, d, ans = 0;

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> d;
	int a[n];
	for (int i = 0; i < n; ++i) {cin >> a[i];}
	sort(a,a+n,greater<int>());
	for (int i = 0; i < d; ++i) {ans += a[i];}
	cout << ans;
	return 0;
}
