#include <bits/stdc++.h>
using namespace std;

long double n;

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	int ans = 0;
	while (n>=2) {n/=2; ans++;}
	cout << ans;
	return 0;
}
