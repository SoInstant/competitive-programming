#include <bits/stdc++.h>
using namespace std;

#define int long long // ~long long man~

int d, ans=0;

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> d;
	for (int i = 0; i < d; ++i) {
		int a;
		cin >> a;
		ans += a;
	}
	cout << ans;
	return 0;
}
