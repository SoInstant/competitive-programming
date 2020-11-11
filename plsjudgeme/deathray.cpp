#include <bits/stdc++.h>
using namespace std;

#define int long long // ~~~LONG LONG MAN~~~
#define inf_ll 1e18
#define inf_int 1e9

int n, q;

int32_t main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
	cin >> n >> q;
	int l[n];
	for (int i = 0; i < n; ++i) {cin >> l[i];}
	for (int i = 0; i <	q; ++i) {
		char ci; int ai;
		cin >> ci >> ai;
		if (ci == 'A') {for (int i = 0; i < n; ++i) {l[i] -= ai;}}
		else {for (int i = 0; i < n; ++i) {l[i] += ai;}}
		sort(l,l+n);
	}
  	return 0;
}
