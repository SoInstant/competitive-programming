#include <bits/stdc++.h>
using namespace std;

#define int long long // ~long long man~

int n,x;
int a[50005];

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> x;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	cout << a[x-1];
	return 0;
}
