#include <bits/stdc++.h>
using namespace std;

#define int long long // ~~~LONG LONG MAN~~~
#define inf_ll 1e18
#define inf_int 1e9
#define NEWLINE cout << "\n"

typedef pair<int, int> pi;

int n, ans = 0;
int a[100005], a1[100005], ss[100005];
vector<int> v;

int32_t main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	for (int i = 0; i < n; ++i) {
		int x; cin >> x;
		a1[i] = x;
		if (x == 1) v.push_back(a[i]);
	}
	sort(v.begin(), v.end(), greater<int>());
	int counter = 0;
	for (int i = 0; i < n; ++i) {
		if (a1[i] == 1) {
			a[i] = v[counter];
			counter++;
		}
	}
	ss[0] = 0;
	for (int i = 1 ; i <= n; ++i) {
		ss[i] = ss[i-1] + a[i-1];
	}
	for (int i = 0; i <=n; ++i) {
		ans += ss[i];
	}
	cout << ans;
  	return 0;
}
