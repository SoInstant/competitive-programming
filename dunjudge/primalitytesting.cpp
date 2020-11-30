#include <bits/stdc++.h>
using namespace std;

#define int long long // ~~~LONG LONG MAN~~~
#define inf_ll 1e18
#define inf_int 1e9
#define NEWLINE cout << "\n"

int n, d;

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
  	cout.tie(0);
  	cin >> n;
  	for (int j = 0; j < n; ++j) {
		cin >> d;
		if (isPrime(d)) cout << d << " is a prime number.";
		else cout << d << " is a composite number.";
		NEWLINE;
	}
  	return 0;
}
