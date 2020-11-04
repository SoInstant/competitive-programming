#include <bits/stdc++.h>
using namespace std;

#define int long long // ~long long man~

int s, e, a, b;

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> s >> e >> a >> b;
	for (int i = s; i <= e; ++i) {
		if (i%a == 0 && i%b == 0)cout << "FizzBuzz\n";
		else if (i%a == 0) cout << "Fizz\n";
		else if (i%b == 0) cout << "Buzz\n";
		else cout << i << "\n";
	}
	return 0;
}
