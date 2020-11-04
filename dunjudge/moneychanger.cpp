#include <bits/stdc++.h>
using namespace std;

#define int long long
#define inf 1e18

int n, v, dp[10005], coins[105];

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> v;
	for (int i = 1; i <= v; ++i) {dp[i] = inf;}
	for (int i = 0; i < n; ++i) {cin >> coins[i];}
	for (int i = 1; i <= v; ++i) {
		for (int j = 0; j < n; ++j) {
			if (i >= coins[j]) {
				dp[i] = min(dp[i], dp[i-coins[j]] + 1);
			}
		}
	}
	int ans = (dp[v] == inf) ? -1 : dp[v];
	cout << ans;
	return 0;
}
