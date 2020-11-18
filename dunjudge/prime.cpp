#include <bits/stdc++.h>
using namespace std;

#define int long long // ~long long man~

int n;

bool isPrime(int n) {
	if (n <= 3) return (n > 1);
	if (n%2 == 0 || n%3 == 0) return false;
	int i = 5;
	while (i * i <= n) {
		if (n%(i) == 0 || n%(i+2) == 0) return false;
		i += 6;
	}
	return true;
}
int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	string ans = isPrime(n)?"Prime":"Not Prime";
	cout << ans;
	return 0;
}
