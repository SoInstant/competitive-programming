#include <bits/stdc++.h>
using namespace std;

#define int long long // ~~~LONG LONG MAN~~~
#define inf_ll 1e18
#define inf_int 1e9
#define NEWLINE cout << "\n"
#define f first
#define s second

typedef pair<int, int> pi;

int di[] = {-2, -1, 1, 2, 2, -1,  1, -2};
int dj[] = { 1,  2, 2, 1,-1, -2, -2, -1};

int n, kx, ky, px, py, t;

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> kx >> ky >> px >> py >> t;
	bool visited[n][n]; int dist[n][n]; queue<pi> q;
	memset(visited, 0, sizeof visited);
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) dist[i][j] = inf_ll;
	}
	for (int i = 0; i < t; ++i) {
		int x, y;
		cin >> x >> y;
		dist[x-1][y-1] = -1;
	}
	dist[kx-1][ky-1] = 0; visited[kx-1][ky-1] = 1;
	for (q.push(pi(kx-1,ky-1));!q.empty();) {
		pi c = q.front(); q.pop();
		for (int i = 0; i < 8; ++i) {
			if (c.f + di[i] < 0 || c.s + dj[i] < 0 ||c.f + di[i] >= n || c.s + dj[i] >= n) continue;
			if (dist[c.f + di[i]][c.s + dj[i]] == -1 || visited[c.f + di[i]][c.s + dj[i]] == 1) continue;
			q.push(pi(c.f + di[i],c.s + dj[i]));
			visited[c.f + di[i]][c.s + dj[i]] = 1;
			dist[c.f + di[i]][c.s + dj[i]] = dist[c.f][c.s] + 1;
		}
	}
	if (dist[px-1][py-1] != inf_ll) cout << dist[px-1][py-1];
	else cout << -1;
	return 0;
}
