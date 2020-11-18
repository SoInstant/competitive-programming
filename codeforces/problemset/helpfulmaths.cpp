#include <bits/stdc++.h>
using namespace std;

#define int long long // ~~~LONG LONG MAN~~~
#define inf_ll 1e18
#define inf_int 1e9
#define NEWLINE cout << "\n"

vector<char> v;

int32_t main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
  	string x;
  	cin >> x;
  	for (auto c: x) {
		if (c != '+') v.push_back(c);
	}
	sort(v.begin(),v.end());
	cout << v[0];
	for (int i = 1; i < (int)v.size(); ++i) {
		cout << "+" << v[i];
	}
  	return 0;
}
