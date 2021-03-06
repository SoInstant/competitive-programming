#include <bits/stdc++.h>
using namespace std;

#define int long long // ~~~LONG LONG MAN~~~

string a, b;

int32_t main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
	cin >> a >> b;
	int x = a.size(), y = b.size();
	int dp[x+1][y+1];
	memset(dp, 0, sizeof dp);
	for (int i = 1; i <= x; ++i) {
		for (int j = 1; j <= y; ++j) {
			if (a[i-1] == b[j-1]) dp[i][j] = dp[i-1][j-1] + 1;
			else dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
			cout << dp[i][j] << " ";
		}
		cout << "\n";
	}
	cout << dp[x][y];
  	return 0;
}
