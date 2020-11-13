#include <bits/stdc++.h>
using namespace std;

#define int long long // ~~~LONG LONG MAN~~~

int t, pushup[1000005], max_p[1000005];

int32_t main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
  	for (int i = 0; i < 1000001; ++i) pushup[i] = 0;
  	for (int i = 1; i <= 1000000; ++i) {
		for (int j = i; j <= 1000000; j+=i) {
			pushup[j] += i;
		}
	}
	max_p[0] = 0;
	for (int i = 1; i <= 1000000; ++i) {
		max_p[i] = max(pushup[i], max_p[i-1]);
	}
	cin >> t;
	for (int i = 0; i < t; ++i) {
		int n; cin >> n;
		cout << max_p[n] << "\n";
	}
  	return 0;
}
