#include <bits/stdc++.h>
using namespace std;

#define int long long // ~long long man~

int l,s,h;

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> l >> s >> h;
	cout << min(l-s+l-h, s+h);
	return 0;
}
