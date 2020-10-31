#include <bits/stdc++.h>
using namespace std;

#define int long long // ~long long man~

int gcd (int a, int b) {
	if (b == 0) return a;
	else return gcd(b, a%b);
}

int a, b;

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> a >> b;
	cout << gcd(max(a,b),min(a,b));
	return 0;
}
