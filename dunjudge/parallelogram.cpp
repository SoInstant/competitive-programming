#include <bits/stdc++.h>
using namespace std;

#define int long long // ~long long man~

int n;
string s;

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> s;
	cout << s << "\n";
	for (int i = 1; i < n; ++i) {
		s = " " + s;
		cout << s << "\n";
	}
	return 0;
}
