#include <bits/stdc++.h>
using namespace std;

#define int long long // ~~~LONG LONG MAN~~~
#define inf_ll 1e18
#define inf_int 1e9
#define NEWLINE cout << "\n"

int n, m, a, counter;

int32_t main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
	cin >> n >> m >> a;
	int x = (n%a == 0)?(n/a):(n/a)+1, y = (m%a == 0)?(m/a):(m/a)+1;
	cout << x * y;
  	return 0;
}
