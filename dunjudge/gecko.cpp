#include <bits/stdc++.h>
using namespace std;

#define int long long // ~~~LONG LONG MAN~~~

int h, w;
int wall[505][505], dp[505][505];

int32_t main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
	cin >> h >> w;
	memset(dp, 0, sizeof dp);
	for (int i = 0; i < h; ++i) {
		for (int j = 0; j < w; ++j) {cin >> wall[i][j];}
	}
	for (int i = 0; i < w; ++i) {dp[0][i] = wall[0][i];}
	
	for (int i = 1; i < h; ++i) {
		for (int j = 0; j < w; ++j) {
			int maximum = dp[i-1][j];
			if (j != 0) maximum = max(maximum, dp[i-1][j-1]);
			if (j != w - 1) maximum = max(maximum, dp[i-1][j+1]);
			dp[i][j] = wall[i][j] + maximum;
		}
	}
	int ans = -1;
	for (int i = 0; i < w; ++i) {ans = max(ans,dp[h-1][i]);}
	cout << ans;
  	return 0;
}
