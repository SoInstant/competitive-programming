#include <bits/stdc++.h>
using namespace std;

#define int long long // ~long long man~

int l, t;

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> l >> t;
	for (int i = 1; i < t; ++i) {
		if (l <= 0) {
			cout << -1;
			return 0;
		}
		else if (l == 1) {
			l = -1;
		} else {
			if (l%2 == 0) l /= 2;
			else l = (3*l)+1;
		}
	}
	cout << l;
	return 0;
}
