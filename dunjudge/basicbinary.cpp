#include <bits/stdc++.h>
using namespace std;

#define int long long // ~long long man~

string s;

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> s;
	int n = s.length(), ans = 0;
	for (int i = 1; i <= n; i++) {if (s[i-1] == '1') ans += pow(2,n-i);}
	cout << ans;
	return 0;
}
