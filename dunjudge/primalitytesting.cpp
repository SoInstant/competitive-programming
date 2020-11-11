#include <bits/stdc++.h>
using namespace std;

#define int long long // ~~~LONG LONG MAN~~~
#define inf_ll 1e18
#define inf_int 1e9

int n, d;

int32_t main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
  	cin >> n;
  	for (int j = 0; j < n; ++j) {
		cin >> d;
		if (d <= 1) {cout << d << " is a composite number.\n"; continue;}
		else if (d <= 3) {cout << d << " is a prime number.\n"; continue;}
		if (d%2 == 0) {cout << d << " is a composite number.\n"; continue;}
		else {
			int upper = sqrt(d);
			for (int i = 2; i <= upper; ++i) {
				if (d%i == 0) {cout << d << " is a composite number.\n"; continue;}
			}
			cout << d <<  "is a prime number.\n";
		}
	}
  	return 0;
}
