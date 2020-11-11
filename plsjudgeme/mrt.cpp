#include <bits/stdc++.h>
using namespace std;

#define int long long // ~~~LONG LONG MAN~~~

int n, e, q;

int32_t main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
	cin >> n >> e >> q;
	int dist[n][n];
	// initialise dist maxtrix with dist[self] = 0 and others = inf
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			dist[i][j] = 1e18;
			if (i == j) dist[i][j] = 0;
		}
	}
	// import dist
	for (int i = 0; i < e; ++i) {
		int x, y, t;
		cin >> x >> y >> t;
		dist[x][y] = t;
		dist[y][x] = t;
	}
	// flyod-warshall
	for (int k = 0; k < n; ++k) {//for every node
		for (int i = 0; i < n; ++i) { // for every pair of nodes
			for (int j = 0; j < n; ++j) {
				dist[i][j] = min(dist[i][k]+dist[k][j], dist[i][j]);
			}
		}
	}
	// handle queries
	for (int i = 0; i < q; ++i) {
		int a, b;
		cin >> a >> b;
		if (dist[a][b] == 1e18) cout << "-1\n";
		else cout << dist[a][b] << "\n";
	}
  	return 0;
}
