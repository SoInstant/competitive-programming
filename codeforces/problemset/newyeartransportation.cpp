#include <bits/stdc++.h>
using namespace std;

#define int long long // ~~~LONG LONG MAN~~~
#define inf_ll 1e18
#define inf_int 1e9
#define NEWLINE cout << "\n"

int n, t;

int adjList[100000];
bool vis[100000];

void dfs (int x) {
	if (vis[x]) return;
	vis[x] = 1;
	dfs(adjList[x]);
	return;
}

int32_t main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
  	cin >> n >> t;
	memset(adjList, 0, sizeof adjList);
	memset(vis, 0, sizeof vis);
	for (int i = 1; i < n; ++i) {
		int x; cin >> x;
		adjList[i] = i + x;
	}
	dfs(1);
	string ans = vis[t]?"YES":"NO";
	cout << ans;
  	return 0;
}
