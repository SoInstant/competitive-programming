#include <bits/stdc++.h>
using namespace std;

#define int long long // ~long long man~

int n;

int a[1005];

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for (int i =0; i< n; ++i) {
		cin >> a[i];
	}
	sort(a,a+n,greater<int>());
	for (int i =0; i< n; ++i) {
		cout << a[i];
		if (i != n-1) cout << " ";
	}
	return 0;
}
