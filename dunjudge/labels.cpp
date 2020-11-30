#include <bits/stdc++.h>
using namespace std;

#define int long long // ~~~LONG LONG MAN~~~
#define inf_ll 1e18
#define inf_int 1e9
#define NEWLINE cout << "\n"

int n;

int32_t main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
	cin >> n;
	int a[n-1];
	for (int i = 0; i < n -1; ++i) cin >> a[i];
	int lower = 1, upper = n;
	while (upper - lower > 1) {
		int mid = (lower+upper)/2, sum = mid;
		for (auto it: a) {
			sum += it;
			if (sum <= 0) {
				lower = mid;
				break;
			} else if (sum > n) {
				upper = mid;
				break;
			}
		}
	}
	cout << lower;
	for (auto it: a) {
		lower += it;
		cout << " " << lower;
	}
  	return 0;
}
