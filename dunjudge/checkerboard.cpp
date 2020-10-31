#include <bits/stdc++.h>
using namespace std;

#define int long long // ~long long man~

int n;

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	if (n == 1) {cout << "o";return 0;}
	string a = "",b ="";
	for (int i = 1; i <= n; ++i) {
		if (i%2 == 0){a += "x"; b += "o";}
		else {b += "x";a += "o";}
	}
	for (int i = 1; i <= n; ++i) {
		if (i%2 == 0){cout << b << "\n";}
		else {cout << a << "\n";}
	}
	return 0;
}
