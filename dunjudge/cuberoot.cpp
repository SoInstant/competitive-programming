#include <bits/stdc++.h>
using namespace std;

#define int long long // ~~~LONG LONG MAN~~~
#define inf_ll 1e18
#define inf_int 1e9
#define NEWLINE cout << "\n"

int t;

int32_t main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
	cin >> t;
	for (int i = 0; i < t; ++i) {
		int n; cin >> n;
		int lower = 0, upper = 1e6;
		while (upper - lower > 1) {
			int mid = (lower + upper) / 2;
			if (mid*mid*mid > n) upper = mid;
			else lower = mid;
		}
		cout << lower;
		NEWLINE;
	}
  	return 0;
}
