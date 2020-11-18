#include <bits/stdc++.h>
using namespace std;

#define int long long // ~~~LONG LONG MAN~~~

string a, b;
int x, y;

int32_t main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
	cin >> x >> y >> a >> b;
	int dp[x+1][y+1];
	memset(dp, 0, sizeof dp);
	for (int i = 1; i <= x; ++i) {
		for (int j = 1; j <= y; ++j) {
			if (a[i-1] == b[j-1]) dp[i][j] = dp[i-1][j-1] + 1;
			else dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
		}
	}
	cout << (4*dp[x][y]) - x - y;
  	return 0;
}
