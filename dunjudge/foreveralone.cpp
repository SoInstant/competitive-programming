#include <bits/stdc++.h>
using namespace std;

#define int long long

int n, m, a, b, ans = 0;

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	if (n == 0 || m == 0){cout << 0; return 0;}
	unordered_set<int> s;
	for (int i = 0; i < m; ++i) {
		int a, b;
		cin >> a >> b;
		if (a != b) {s.insert(a);s.insert(b);}
	}
	cout << n - s.size();
	return 0;
}
