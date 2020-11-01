#include <bits/stdc++.h>
using namespace std;

#define int long long // ~long long man~

int n;

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	if (n <= 1) {cout << "Not Prime"; return 0;}
	else if (n <= 3) {cout << "Prime"; return 0;}
	if (n%2 == 0) {cout << "Not Prime"; return 0;}
	else {
		int upper = sqrt(n);
		for (int i = 2; i <= upper; ++i) {
			if (n%i == 0) {cout << "Not Prime"; return 0;}
		}
		cout << "Prime";
	}
	return 0;
}
