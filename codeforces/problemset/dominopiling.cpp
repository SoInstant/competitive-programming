#include <bits/stdc++.h>
using namespace std;

#define int long long // ~~~LONG LONG MAN~~~
#define inf_ll 1e18
#define inf_int 1e9
#define NEWLINE cout << "\n"

int m, n;

int32_t main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
	cin >> m >> n;
	if (m%2 == 0 && n%2==0) {cout << (m*n)/2; return 0;}
	cout << ((n-1)*(m-1))/2 + n/2 + m/2;
  	return 0;
}
