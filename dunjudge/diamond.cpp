#include <bits/stdc++.h>
using namespace std;

#define int long long // ~long long man~

int n;
string a[35];

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		string s = "";
		for (int j = 0; j < 1 + i*2; j++) {s+= "*";}
		a[i] = s;
	}
	for (int i = 0; i < n - 1; i++) {
		string s = "";
		for (int j = 0; j < n - i - 1;j++) {s+= " ";}
		a[i] = s + a[i];
	}
	for (int i = 0; i < n; ++i) {cout << a[i] << "\n";}
	for (int i = n-2; i >=0; --i) {cout << a[i] << "\n";}
	return 0;
}
