#include <bits/stdc++.h>
using namespace std;

#define int long long // ~long long man~

int n,ans=0;

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for (int i = 0; i < n; ++i) {
		int a,b;
		cin >> a >> b;
		ans += a * b;
	}
	cout << ans;
	return 0;
}
