#include <bits/stdc++.h>
using namespace std;

#define int long long // ~~~LONG LONG MAN~~~
#define inf_ll 1e18
#define inf_int 1e9

int n;

int32_t main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
	cin >> n;
	int dist[n][n];
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			int a; cin >> a;
			dist[i][j] = a;
		}
	}
	for (int k = 0; k < n; ++k) {
		for(int i = 0; i < n; ++i) {
			for (int j = 0; j < n; ++j) {
				dist[i][j] = max(min(dist[i][k],dist[k][j]),dist[i][j]);
			}
		}
	}
	int ans = inf_ll;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			ans = min(ans, dist[i][j]);
		}
	}
	cout << ans;
  	return 0;
}
