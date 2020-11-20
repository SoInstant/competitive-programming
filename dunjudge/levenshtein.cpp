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
	int dp[x + 1][y + 1];
	for (int i = 0; i <= x; i++) {
		for (int j = 0; j <= y; j++) {
			if (i == 0) dp[i][j] = j;
			else if (j == 0) dp[i][j] = i;
			else if (a[i - 1] == b[j - 1]) dp[i][j] = dp[i - 1][j - 1];
			else dp[i][j] = 1 + min({dp[i][j - 1], dp[i - 1][j], dp[i - 1][j - 1]});
		}
	}
	cout << dp[x][y];
  	return 0;
}
