#include <bits/stdc++.h>
using namespace std;

#define int long long // ~long long man~

int n, m;

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	if (n%m == 0) {cout << "Yes";}
	else {cout << "No";}
	return 0;
}
