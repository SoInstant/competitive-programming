#include <bits/stdc++.h>
using namespace std;

#define int long long // ~long long man~

int r, c;

int nCr (int n, int r) {
	if (n<=1) return 1;
	__int128 ans = 1;
	for (int i = n; i > n-r; i--) {ans *= i;}
	for (int i = 1; i <=r; i++) {ans /= i;}
	return (int) ans;
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> r >> c;
	cout << nCr(r-1,c-1);
	return 0;
}
