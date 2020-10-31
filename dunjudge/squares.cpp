#include <bits/stdc++.h>
using namespace std;

#define int long long // ~long long man~

int l;

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> l;
	for (int i = 1; i <=l; ++i) {
		cout << i * i;
		if (i != l) cout << " ";
	}
	return 0;
}
