#include <bits/stdc++.h>
using namespace std;

#define inf_int 1e9
#define NEWLINE cout << "\n"
`
int n, s, ans = 0;
int adjList[1000000000][2], dist[1000000000];
bool visited[1000000000];

void constr_node(int n, int s) {
	if (n > s) {
		if (adjList[s][1] == inf_int) adjList[s][1] = n;
		else constr_node(n, adjList[s][1]);
	} else {
		if (adjList[s][0] == inf_int) adjList[s][0] = n;
		else constr_node(n, adjList[s][0]);
	}
}

int32_t main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
  	for (int i = 0; i <= 1000000000; ++i) {
		for (int j = 0; j < 2; ++j) adjList[i][j] = inf_int;
	}
	memset(dist, -1, sizeof dist);
	memset(visited, 0, sizeof visited);
	// construct tree
	cin >> n >> s;
	for (int i = 1; i < n; ++i) {
		int c; cin >> c;
		constr_node(c, s);
	}
	// do bfs
	queue<int> q;
	visited[s] = 1; dist[s] = 0;
	q.push(s);
	while(!q.empty()) {
		int v = q.front(); q.pop();
		for (int i = 0; i < 2; ++i) {
			if (adjList[v][i] == inf_int || visited[adjList[v][i]]) continue;
			q.push(adjList[v][i]);
			visited[adjList[v][i]] = 1; dist[adjList[v][i]] = dist[v] + 1;
		}
	}
	for (auto it: dist) {
		if (it == -1) continue;
		else ans += it;
	}
	cout << ans;
  	return 0;
}
