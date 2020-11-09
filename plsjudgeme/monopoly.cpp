#include <bits/stdc++.h>
using namespace std;

#define int long long // ~~~LONG LONG MAN~~~

int tc, dp[400000];
const int m = 1000000007;

int32_t main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
	memset(dp, 0, sizeof dp);
	dp[0] = 1;
	for (int i = 1; i < 400000; ++i) {
		for (int j = 1; j < 7; ++j) {
			if (i - j >= 0) {
				dp[i] += dp[i-j]%m;
				dp[i] %= m;
			}
		}
	}
  	cin >> tc;
	for (int t = 0; t < tc; ++t) {
		int n, x;
		char s;
		cin >> n >> s >> x;
		int idx = ((n-1)*(s-'A')+x)%(4*(n-1));
		cout << dp[idx] << "\n";
	}
  	return 0;
}
