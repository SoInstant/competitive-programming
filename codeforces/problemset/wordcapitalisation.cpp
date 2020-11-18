#include <bits/stdc++.h>
using namespace std;

#define int long long // ~~~LONG LONG MAN~~~
#define inf_ll 1e18
#define inf_int 1e9
#define NEWLINE cout << "\n"

string s;

int32_t main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
	cin >> s;
	if (s[0] >= 'a' && s[0] <= 'z') s[0] = s[0] - 'a' + 'A';
	cout << s;
  	return 0;
}
