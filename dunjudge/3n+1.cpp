#include <bits/stdc++.h>
using namespace std;

#define int long long // ~long long man~

int n;

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	while (n != 1) {
		cout << n << " ";
		if (n%2 == 1) {n = 3*n + 1;}
		else {n /= 2;}
	}
	cout << 1;
	return 0;
}
