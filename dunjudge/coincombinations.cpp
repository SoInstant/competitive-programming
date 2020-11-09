#include <bits/stdc++.h>
using namespace std;

#define int long long // ~~~LONG LONG MAN~~~

int n, v;

int32_t main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
  	cin >> n >> v;
  	int coins[n];
  	int dp[n][v+1];
  	for (int i = 0; i < n; ++i) {
		cin >> coins[i];
		dp[i][0] = 1;
	}
	for (int i = 0; i <= v; ++i) {
		if (i%coins[0] == 0) dp[0][i] = 1;
		else dp[0][i] = 0;
	}
	for (int i = 1; i < n; ++i) {
		for (int j = 1; j <= v; ++j) {
			if (j-coins[i] < 0) {dp[i][j] = dp[i-1][j]%13371337;}
			else {dp[i][j] = (dp[i-1][j]+dp[i][j-coins[i]])%13371337;}
		}
	}
	cout << dp[n-1][v];
  	return 0;
}
