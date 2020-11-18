#include <bits/stdc++.h>
using namespace std;

#define int long long // ~~~LONG LONG MAN~~~
#define inf_ll 1e18
#define inf_int 1e9
#define NEWLINE cout << "\n"

typedef pair<vector<int>,int> pvii; // number & prime factors

int n;
vector<pvii> v;

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

vector<int> primeFactors(int n) {
	vector<int> factors;
	factors.push_back(1);
	if (isPrime(n)) {factors.push_back(n); return factors;}
	for (int i = 2; i <= n; ++i) {
		if (n == 1) break;
		if (!isPrime(i)) continue;
		while (n%i == 0) {
			n/= i;
			factors.push_back(i);
		}
	}
	return factors;
}


int32_t main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
	cin >> n;
	for (int i = 0; i < n; ++i) {
		int x; cin >> x;
		v.push_back(pvii(primeFactors(x),x));
	}
	sort(v.begin(),v.end());
	for (auto it: v) {
		cout << it.second << "\n";
	}
  	return 0;
}
