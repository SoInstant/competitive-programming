#include <bits/stdc++.h>
using namespace std;

#define int long long // ~long long man~
#define mp make_pair

int n, m;
typedef pair<int,int> pi;

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	pi coins[n];
	int dp[n+1][m+1];
	for (int i = 0; i< n; ++i) {
		int a,b;
		cin >> a >> b;
		coins[i] = mp(a,b); //weight, value
	}
	memset(dp, 0, sizeof dp);
	for (int i = 1; i <= n; ++i) {
		for (int j = 0; j <= m; ++j) {
			dp[i][j] = dp[i-1][j]; // dont take item
			if (j > 0) dp[i][j] = max(dp[i][j-1], dp[i][j]); // sacrifice
			if (j-coins[i-1].first >= 0) {
				dp[i][j] = max(
				dp[i-1][j-coins[i-1].first] + coins[i-1].second, 
				dp[i][j]); // take item
			}
		}	
	}
	cout << dp[n][m];
	return 0;
}
