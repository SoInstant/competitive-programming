#include <bits/stdc++.h>
using namespace std;

#define int long long // ~long long man~

int n, s;

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> s;
	int a[n];
	for (int i = 0; i < n; ++i) {a[i] = i;}
	for (int i = 0; i < s; ++i) {
		int b,c,temp1,temp2;
		cin >> b >> c;
		temp1 = a[c]; temp2 = a[b];
		a[c] = temp2; a[b] = temp1;
	}
	for (int i = 0; i < n; ++i) {cout << a[i] << "\n";}
	return 0;
}
