#include <bits/stdc++.h>
using namespace std;

#define int long long // ~long long man~

int h,w,z=1;
string s;

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> h >> w;
	char a[h][w];
	int dp[h][w];
	memset(dp, 0, sizeof dp);
	for (int i = 0; i < h; ++i) {
		cin >> s;
		for (int j = 0; j < w; ++j) {
			a[i][j] = s[j];
		}
	}
	for (int i = 0; i < w; ++i) {
		if (a[0][i] == 'X') z = 0;
		else dp[0][i] = z;
	}
	z = 1;
	for (int i = 0; i < h; ++i) {
		if (a[i][0] == 'X') z = 0;
		else dp[i][0] = z;
	}
	dp[0][0] = 0;
	for (int i = 1; i < h; ++i) {
		for (int j = 1; j < w; ++j) {
			if (a[i][j] != 'X') {
				dp[i][j] = dp[i][j-1] + dp[i-1][j];
			}
		}
	}
	cout << dp[h-1][w-1];
	return 0;
}
