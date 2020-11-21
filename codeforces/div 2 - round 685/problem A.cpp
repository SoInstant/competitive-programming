#include <bits/stdc++.h>
using namespace std;

#define int long long // ~~~LONG LONG MAN~~~
#define inf_ll 1e18
#define inf_int 1e9
#define NEWLINE cout << "\n"

int t;

int smallest_factor(int x) {
	for (int i = 2; i <= sqrt(x); ++i) {
		if (x%i==0) return i;
	}
	return 1;
}

int32_t main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
	cin >> t;
	for (int i = 0; i < t; ++i) {
		int n; cin >> n;
		int counter = 0;
		while (n != 1) {
			if (n == 2){
				n--;
				counter++;
				continue;
			} else if (n == 3) {
				n--;
				counter++;
				continue;
			}
			int rmd = smallest_factor(n);
			if (rmd > n - 1) n--;
			else n = rmd;
			counter++;
		}
		cout << counter;
		NEWLINE;
	}
  	return 0;
}
