#include <bits/stdc++.h>
using namespace std;

#define int long long // ~~~LONG LONG MAN~~~
#define inf_ll 1e18
#define inf_int 1e9
#define NEWLINE cout << "\n"


int n, e, ans = 0;

int32_t main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
	cin >> n >> e;
	int dist[n][n];
	// initialise dist maxtrix with dist[self] = 0 and others = -inf
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			dist[i][j] = 1e18;
			if (i == j) dist[i][j] = 0;
		}
	}
	// import dist (for undirected graph)
	for (int i = 0; i < e; ++i) {
		int x, y, t;
		cin >> x >> y >> t;
		dist[x][y] = t;
		dist[y][x] = t;
	}
	// floyd-warshall
	for (int k = 0; k < n; ++k) {//for every middle node
		for (int i = 0; i < n; ++i) { // for every pair of nodes
			for (int j = 0; j < n; ++j) {
				dist[i][j] = min(dist[i][k]+dist[k][j], dist[i][j]);
			}
		}
	}
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			ans = max(ans, dist[i][j]);
		}
	}
	cout << ans;
  	return 0;
}
