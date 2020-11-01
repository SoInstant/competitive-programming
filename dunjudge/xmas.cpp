#include <bits/stdc++.h>
using namespace std;

#define int long long // ~long long man~

int n;

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	int a[n+1];
	for (int i = 0; i < n; ++i) {
		int b;
		cin >> b;
		a[b] = i + 1;
	}
	for (int i = 1; i <= n; ++i) {
		cout << a[i] << "\n";
	}
	return 0;
}
