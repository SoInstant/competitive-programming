#include <bits/stdc++.h>
using namespace std;

#define int long long // ~~~LONG LONG MAN~~~
#define inf_ll 1e18
#define inf_int 1e9
#define NEWLINE cout << "\n"

int n, p[1005];

int bfs(int x) {
	queue<int> q;
	int dist[1005];
	memset(dist, 0, sizeof dist);
	q.push(x);
	while(!q.empty()) {
		int c = q.front(); q.pop();
		dist[c] = dist[c] + 1;
		if (dist[c] == 2) return c;
		q.push(p[c]);
	}
	return 0;
}

int32_t main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
	cin >> n;
	for (int i = 1; i <=n; ++i) cin >> p[i];
	cout << bfs(1);
	for (int i = 2; i <= n; ++i) {
		cout << " "<< bfs(i);
	}
  	return 0;
}
