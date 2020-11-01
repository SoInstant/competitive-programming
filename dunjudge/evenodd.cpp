#include <bits/stdc++.h>
using namespace std;

#define int long long // ~long long man~

int n;

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for (int i = 0; i < n;++i) {
		string s;
		cin >> s;
		if ((int)s[(int)s.size()-1]%2 == 0) cout << "even" << "\n";
		else cout << "odd" << "\n";
	}
	return 0;
}
