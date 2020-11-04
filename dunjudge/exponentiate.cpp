#include <bits/stdc++.h>
using namespace std;

#define int long long // ~long long man~

int t, a, b, m;

int power(int a, int b, int m) {
	if (b == 1) return a%m;
	else {
		int p1 = power(a,b/2,m)%m;
		if (b%2 != 0) return (p1 * p1 * a%m)%m;
		else return (p1*p1)%m;
	}
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> t;
	for (int i = 0; i < t; ++i) {
		cin >> a >> b >> m;
		int ans = power(a,b,m);
		cout << ans << "\n";
	}
	return 0;
}
