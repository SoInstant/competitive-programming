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
	bool led[n+1];
	memset(led, 1, sizeof led);
	for (int i = 2; i <= n; ++i) {
		for (int j = i; j <=n; j+=i) led[j] = !led[j];
	}
	int counter = 0;
	for (int i = 1; i <=n; ++i) {
		if (led[i] == 1) counter++;
 	}
 	cout << counter;
  	return 0;
}
	
