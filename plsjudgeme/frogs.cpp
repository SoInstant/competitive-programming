#include <bits/stdc++.h>
using namespace std;

#define int long long // ~~~LONG LONG MAN~~~
#define inf_ll 1e18
#define inf_int 1e9
#define NEWLINE cout << "\n"
#define f first
#define s second

typedef pair<int, int> pi;

int n, m ,k;

int32_t main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
	cin >> n >> m >> k;
	int d[m]; pi step[m];
	for (int i = 0; i < m; ++i) {
		step[i].f = 0; step[i].s = i + 1;
	}
	for (int i = 0; i < m; ++i) cin >> d[i];
	for (int i = 0; i < k; ++i) {
		int x; cin >> x;
		for (int j = 0; j < m; ++j) {
			if (x%d[j] == 0) step[j].f++;
		}
	}
	sort(step, step+m);
	int min_step = step[0].f;
	vector<int> v;
	for (auto it: step) {
		if (it.f == min_step) v.push_back(it.s);
	}
	cout << v.size();
	NEWLINE;
	for (auto it: v) {
		if (it == v.back()) {
			cout << it;
			continue;
		} else {
			cout << it << " ";
		}
	}
  	return 0;
}
