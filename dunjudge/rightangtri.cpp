#include <bits/stdc++.h>
using namespace std;

#define int long long // ~long long man~

int n;

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	string s = "";
	for (int i = 0; i < n; ++i) {
		s += "*";
		cout << s << "\n";
	}
	return 0;
}
