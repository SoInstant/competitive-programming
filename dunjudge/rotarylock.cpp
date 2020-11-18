#include <bits/stdc++.h>
using namespace std;

#define int long long // ~~~LONG LONG MAN~~~

int ft[1000005], n, q, k, m;

int ls(int x) {return (x & (-x));}

void update(int l, int v, int m) {//update from l to end of array inclusive
	for (; l <= n; l += ls(l)) (ft[l] += v) %= m;
}

int query(int p) {
	int sum = 0;
	for (; p; p -= ls(p)) (sum += ft[p]) %= m;
	return sum;
}

int32_t main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
	cin >> n >> q >> k;
	m = 1;
	for (int i = 0; i < k; i++) m *= 2;
	for (int i = 0; i < q; ++i) {
		int arg; cin >> arg;
		if (arg == 0) {
			int d, s; cin >> d >> s;
			update(d,s,m);
		} else {
			int d; cin >> d;
			cout << (query(d)%m) << "\n";
		}
	}
  	return 0;
}
