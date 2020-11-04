#include <bits/stdc++.h>
using namespace std;

#define int long long // ~long long man~

int n = 0;

int32_t main() {
	cin >> n;
	int a[n],max_n=0;
	for (int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		a[i] = x;
		max_n = max(max_n,x);
	}
	int dp[max_n+1];
	for (int i = 0; i < max_n+1; ++i) {dp[i] = 1e18;}
	dp[0] = 0;
	for (int i = 1; i < max_n+1; ++i) {
		if (i%3 == 0 && i%2 == 0) {
			dp[i] = min(dp[i/3],dp[i/2]);
			dp[i] = min(dp[i],dp[i-1]) + 1;
		}
		else if (i%3 == 0) {
			dp[i] = min(dp[i/3], dp[i-1]) + 1;
		} else if (i%2 == 0) {
			dp[i] = min(dp[i/2], dp[i-1]) + 1;
		} else {
			dp[i] = dp[i-1] + 1;
		}
	}
	for (auto it: a) {
		cout << dp[it] << "\n";
	}
	return 0;
}
