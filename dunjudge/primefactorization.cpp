#include <bits/stdc++.h>
using namespace std;

#define int long long // ~~~LONG LONG MAN~~~
#define inf_ll 1e18
#define inf_int 1e9
#define NEWLINE cout << "\n"

int n;

bool isPrime(int n) {
	if (n <= 3) return (n > 1);
	if (n%2 == 0 || n%3 == 0) return false;
	int i = 6;
	while (i * i <= n) {
		if (n%(i-1) == 0 || n%(i+1) == 0) return false;
		i += 6;
	}
	return true;
}

int32_t main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
	cin >> n;
	if (isPrime(n)) {cout << n << "^1\n"; return 0;}
	for (int i = 2; i <= n; ++i) {
		if (!isPrime(i)) continue;
		int counter = 0;
		while (n%i == 0) {
			n/= i;
			counter++;
		}
		if (counter != 0)cout << i << "^" << counter << "\n";
	}
  	return 0;
}
