#include <bits/stdc++.h>
using namespace std;

#define int long long // ~~~LONG LONG MAN~~~

int n, q, x, ans[500005];
unordered_set<int> s;

int32_t main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
	cin >> n >> q;
	for (int i = 0; i < n; ++i) {
		cin >> x;
		s.insert(x);
		ans[i] = s.size();
	}
	for (int i = 0; i < q; ++i) {
		cin >> x;
		cout << ans[x-1] << " ";
	}
  	return 0;
}
