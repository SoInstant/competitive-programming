#include <bits/stdc++.h>
using namespace std;

#define int long long // ~~~LONG LONG MAN~~~
#define inf_ll 1e18
#define inf_int 1e9
#define NEWLINE cout << "\n"

int c, min_x=inf_ll;

int32_t main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
	cin >> c;
	int a[c];
	for (int i = 0; i < c; ++i) {
		int x; cin >> x;
		a[i] = x;
		min_x = min(min_x, x);
	}
	int ans = c * min_x;
	for (auto it: a) {
		if (it - min_x > 0) ans++;
	}
	cout << ans;
  	return 0;
}
