#include <bits/stdc++.h>
using namespace std;

int n, m, a, b, ans = 0;

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	if (n == 0 || m == 0){cout << 0; return 0;}
	int adjList[n+5];
	memset(adjList,0, sizeof adjList);
	for (int i = 0; i < m; ++i) {
		cin >> a >> b;
		if (a == b) continue;
		else {
			adjList[a]++;
			adjList[b]++;
		}
	}
	for (int i = 0; i < n; ++i){
		if (adjList[i] == 0) ans++;
	}
	cout << ans;
	return 0;
}
