#include <bits/stdc++.h>
using namespace std;

#define int long long // ~~~LONG LONG MAN~~~
#define inf_ll 1e18
#define inf_int 1e9
#define mp make_pair

typedef pair<int,int> pi;

int n, q;
vector<pi> adjList[100005];
int dist[100005];
int visited[100005];

void dfs(int x) {
	if (visited[x] == 1) return;
	else {
		visited[x] = 1;
		for (auto it: adjList[x]) {
			if (visited[it.first]) continue;
			dist[it.first] = dist[x] + it.second;
			dfs(it.first);
		}
	}
}

int32_t main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
  	memset(visited, 0, sizeof visited);
  	cin >> n;
	for (int i = 0; i < n-1; ++i) {
		int a, b, h;
		cin >> a >> b >> h;
		adjList[a-1].push_back(mp(b-1,h));
		adjList[b-1].push_back(mp(a-1,-h));
	}
	dist[0] = 0;
	dfs(0);
	cin >> q;
	for (int i = 0; i < q; ++i) {
		int x, y;
		cin >> x >> y;
		cout << dist[y-1] - dist[x-1] << "\n";
	}
  	return 0;
}
