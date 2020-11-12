#include <bits/stdc++.h>
using namespace std;

#define int long long // ~~~LONG LONG MAN~~~
#define inf_ll 1e18
#define inf_int 1e9
#define NEWLINE cout << "\n"

int n, b;

int32_t main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
	cin >> n >> b;
	int s[n], ans = 0;
	for (int i = 0; i < n; ++i) {cin >> s[i];}
	if (n-1 > b) {cout << -1; return 0;}
	sort(s,s+n,greater<int>());
	for (int i = 1; i < n; ++i) {
		ans += (s[0] + s[i]);
	}
	cout << ans;
  	return 0;
}
