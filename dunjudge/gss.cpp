#include <bits/stdc++.h>
using namespace std;

#define int long long // ~long long man~

int n, ans;

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	sort(a,a+n,greater<int>());
	for (int i = 0; i < n-(n%4); ++i) {
		ans = ans + a[i] + a[i+1] + a[i+2];
		i += 3;
	}
	for (int i = 0; i < n%4; ++i) {
		ans += a[n-i-1];
	}
	cout << ans;
	return 0;
}
