#include <bits/stdc++.h>
using namespace std;

#define int long long // ~~~LONG LONG MAN~~~
#define inf_ll 1e18
#define inf_int 1e9
#define NEWLINE cout << "\n"

int n, d, ans;

int32_t main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
	cin >> n >> d;
	int a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	sort(a,a+n,greater<int>());
	for (int i = 0; i < d; ++i) ans += a[i];
	cout << ans;
  	return 0;
}
