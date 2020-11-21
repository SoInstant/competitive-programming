#include <bits/stdc++.h>
using namespace std;

#define int long long // ~~~LONG LONG MAN~~~
#define inf_ll 1e18
#define inf_int 1e9
#define NEWLINE cout << "\n"

typedef pair<int, int> pi;

int n, a;
stack<int> s;
map<int, int> mp;

void action_3() {
	if (!s.empty()) {
		mp[s.top()] = 0;
		s.pop();
		if (!s.empty()) {
			if (mp[s.top()] == 0) action_3(); // if next one is to be cleared
		}
	}
	return;
}

void action_4() {
	if (!s.empty()) {
		if (mp[s.top()] == 0) {action_3(); action_4();}
		else cout << s.top();
	} else cout << -1;
}

int32_t main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
	cin >> n;
	for (int i = 0; i < n; ++i) {
		int x; cin >> x;
		if (x == 1) {
			cin >> a;
			s.push(a);
			mp[a] = 1;
		} else if (x == 2) {
			cin >> a;
			mp[a] = 0;
		} else if (x == 3) {
			action_3();
		} else {
			action_4();
			NEWLINE;
		}
	}
  	return 0;
}
