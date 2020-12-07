#include <bits/stdc++.h>
using namespace std;

#define int long long // ~~~LONG LONG MAN~~~
#define inf_ll 1e18
#define inf_int 1e9
#define NEWLINE cout << "\n"

int n, ans = 0;

int32_t main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
	cin >> n;
	vector<int> adjList[n];
	int dist[n]; bool vis[n];
	memset(dist, 0, sizeof dist);
	memset(vis, 0, sizeof vis);
	for (int i = 1; i < n; ++i) {
		int x; cin >> x;
		adjList[x].push_back(i);
	}
	queue<int> q;
	vis[0] = 1; dist[0] = 1;
	q.push(0);
	while (!q.empty()) {
		int c = q.front(); q.pop();
		for (auto it: adjList[c]) {
			if (vis[it]) continue;
			q.push(it);
			dist[it] = dist[c] + 1;
			ans = max(ans, dist[it]);
			vis[it] = 1;
		}
	}
	cout << ans;
  	return 0;
}
