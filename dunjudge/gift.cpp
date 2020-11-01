#include <bits/stdc++.h>
using namespace std;

#define int long long // ~long long man~

int n,k,ans = 0;
int a[105];

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> k;
	for (int i = 0; i < n; ++i) {cin >> a[i];}
	for (int i = 1; i < n; ++i) {
		if (a[i-1] - a[i] >= k) ans++;
	}
	cout << ans;
	return 0;
}
