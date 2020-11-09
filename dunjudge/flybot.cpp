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
	dp[0][0] = 1;
	for (int i = 0; i < h; ++i) {
		for (int j = 0; j < w; ++j) {
			if (a[i][j] != 'X') {
				if (i-1 < 0 && j - 1 <0) continue;
				else if (i - 1 < 0) {dp[i][j] = dp[i][j-1]%1000000007;}
				else if (j -1 < 0) {dp[i][j] = dp[i-1][j]%1000000007;}
				else {dp[i][j] = (dp[i-1][j] + dp[i][j-1])%1000000007;}
			}
		}
	}
	cout << dp[h-1][w-1];
	return 0;
}
