#include <bits/stdc++.h>
using namespace std;

#define int long long // ~~~LONG LONG MAN~~~
#define inf_ll 1e18
#define inf_int 1e9
#define NEWLINE cout << "\n"

int n, sum = 0, ans = 0;

int32_t main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
	cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i) {
		int x; cin >> x;
		a[i] = x;
		sum += x;
	}
	sum /= n;
	for (auto it: a) ans += abs(it-sum);
	ans /= 2; cout << ans;
  	return 0;
}
