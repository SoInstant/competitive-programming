#include <bits/stdc++.h>
using namespace std;

#define int long long // ~~~LONG LONG MAN~~~
#define inf_ll 1e18
#define inf_int 1e9
#define NEWLINE cout << "\n"

int n;
vector<int> v;

int32_t main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
	cin >> n;
	for (int i = 0; i < n; ++i) {
		int a; cin >> a;
		if (a == 1) {
			int b; cin >> b;
			v.push_back(b);
		}
		else if (a == 2) {
			int b; cin >> b;
			v.erase(remove(v.begin(),v.end(), b), v.end());
		}
		else if (a == 3) {
			v.pop_back();
		}
		else {
			if (v.empty()) cout << -1;
			else cout << v.back();
			NEWLINE;
		}
	}
  	return 0;
}
