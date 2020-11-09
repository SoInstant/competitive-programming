#include <bits/stdc++.h>
using namespace std;

#define int long long // ~~~LONG LONG MAN~~~

int n, s;

int32_t main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
	cin >> n >> s;
	int a[n];
	for (int i = 0; i < n; ++i) {cin >> a[i];}
	for (int i = 0; i < s; ++i) {
		int dp[n+1][n+1], b[n];
		for (int j = 0; j < n; ++j) {cin >> b[j];}
		memset(dp, 0, sizeof dp);
		for (int j = 1; j <= n; ++j) {
			for (int k = 1; k <= n; ++k) {
				if (a[j-1] == b[k-1]) dp[j][k] = dp[j-1][k-1] + 1;
				else dp[j][k] = max(dp[j][k-1],dp[j-1][k]);
			}
		}
		cout << dp[n][n] << "\n";
	}
  	return 0;
}
