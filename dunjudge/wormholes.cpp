#include <bits/stdc++.h>
using namespace std;

#define int long long // ~~~LONG LONG MAN~~~
#define inf_ll 1e18
#define inf_int 1e9
#define NEWLINE cout << "\n"

int n, w;

int32_t main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
	cin >> n >> w;
	vector<int> adjList[n]; int dist[n]; bool visited[n]; queue<int> q;
	for (int i = 0; i < n; ++i) {dist[i] = inf_ll; visited[i] = 0;}
	for (int i = 0; i < n - 1; ++i) adjList[i].push_back(i+1);
	for (int i = 0; i < w; ++i) {
		int x, y;
		cin >> x >> y;
		adjList[x].push_back(y);
	}
	dist[0] = 0; visited[0] = 1;
	for (q.push(0); !q.empty();) {
		int c = q.front(); q.pop();
		for (auto i: adjList[c]) {
			if (visited[i]) continue;
			q.push(i); visited[i] = 1;
			dist[i] = dist[c] + 1;
		}
	}
	cout << dist[n-1];
  	return 0;
}
