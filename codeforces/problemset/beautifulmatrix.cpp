#include <bits/stdc++.h>
using namespace std;

#define int long long // ~~~LONG LONG MAN~~~
#define inf_ll 1e18
#define inf_int 1e9
#define NEWLINE cout << "\n"

int32_t main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 5; ++j) {
			int x; cin >> x;
			if (x == 1) {cout << abs(i-2) + abs(j-2); break;}
		}
	}
  	return 0;
}
