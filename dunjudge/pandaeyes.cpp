#include <bits/stdc++.h>
using namespace std;

#define int long long // ~~~LONG LONG MAN~~~
#define inf_ll 1e18
#define inf_int 1e9
#define NEWLINE cout << "\n"
#define f first
#define s second

typedef pair<int, int> pi;

int n, curr = 0, counter = 0;

int32_t main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
	cin >> n;
	vector<pi> v;
	for (int i = 0; i < n; ++i) {
		int s, e; cin >> s >> e;
		v.push_back(pi(s,e));
	}
	sort(v.begin(), v.end());
	for (auto it: v) {
		if (curr > it.f) continue;
		curr = it.s; counter++;
	}
	cout << counter;
  	return 0;
}
