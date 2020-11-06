#include <bits/stdc++.h>
using namespace std;

#define int long long // ~long long man~

int n, q;

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> q;
	int a[n], b[q], dp[n];
	for (int i = 0; i < n; ++i) {cin >> a[i];}
	for (int i = 0; i < q; ++i) {cin >> b[i];}
	unordered_set<int> us;
	for (int i =0 ;i < n;++i) {
		us.insert(a[i]);
		dp[i] = us.size();
	}
	for (int i =0; i < q; ++i) {
		cout << dp[b[i]-1] << " ";
	}
	return 0;
}
