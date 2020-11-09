#include <bits/stdc++.h>
using namespace std;

#define int long long // ~~~LONG LONG MAN~~~

int n;

int32_t main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
	cin >> n;
	if (n==1) {cout << "x";return 0;}
	string s;
	for (int i = 0; i < n -2; ++i) {s += "x";}
	for (int i = 1; i <= n; ++i) {
		string spaces = "";
		for (int j = 0; j < n -i; ++j) {spaces += " ";}
		for (int j = 0; j < 2; ++j) {s += "x";}
		cout << spaces << s << "\n";
	}
	for (int i = 1; i < n; ++i) {
		string spaces = "";
		for (int j = 0; j < i; ++j) {spaces += " ";}
		s = s.substr(2);
		cout << spaces << s << "\n";
	}
  	return 0;
}
