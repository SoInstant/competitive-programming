#include <bits/stdc++.h>
using namespace std;

#define int long long // ~~~LONG LONG MAN~~~
#define inf_ll 1e18
#define inf_int 1e9
#define NEWLINE cout << "\n"

int n;
stack<int> s;

int32_t main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
	cin >> n;
	for (int i = 0; i < n; ++i) {
		int a; cin >> a;
		while (!s.empty()) {
			if (s.top() <= a) s.pop();
			else break;
		}
		s.push(a);
	}
	while(!s.empty()) {
		cout << s.top();
		NEWLINE;
		s.pop();
	}
  	return 0;
}
