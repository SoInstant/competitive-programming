#include <bits/stdc++.h>
using namespace std;

#define int long long // ~long long man~

int n;

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	string a[n];
	for (int i = 0; i < n; ++i) {cin >> a[i];}
	
	int min_len = 1e18;
	for (auto it: a) {
		min_len = min((int)it.length(),min_len);
	}
	for (auto it: a) {
		if ((int) it.length() == min_len) {cout << it; break;}
	}
	return 0;
}
