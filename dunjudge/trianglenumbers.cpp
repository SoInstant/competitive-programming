#include <bits/stdc++.h>
using namespace std;

#define int long long // ~long long man~

int n, ans;

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for (int i = 1; i <= n; ++i) {ans += i;}
	cout << ans;
	return 0;
}
