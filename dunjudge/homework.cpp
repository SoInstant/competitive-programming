#include <bits/stdc++.h>
using namespace std;

int n;

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i) {cin >> a[i];}
	sort(a,a+n);
	for (int i = 0; i < n; ++i) {
		cout << a[i];
		if (i == n-1) {cout << "\n";}
		else cout << " ";
	}
	return 0;
}
