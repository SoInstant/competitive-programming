#include <bits/stdc++.h>
using namespace std;

#define int long long // ~~~LONG LONG MAN~~~
#define inf_ll 1e18
#define NEWLINE cout << "\n"

int n, k, ans = inf_ll;
int a[100005];

int32_t main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
	cin >> n >> k;
	for (int i = 0; i < n; ++i) cin >> a[i];
	if (n == k) cout << 0;
	else cout << min(a[n-1] - a[k], a[n-1-k] - a[0]);
  	return 0;
}
