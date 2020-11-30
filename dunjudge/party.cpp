#include <bits/stdc++.h>
using namespace std;

#define int long long // ~~~LONG LONG MAN~~~
#define inf_ll 1e18
#define inf_int 1e9
#define NEWLINE cout << "\n"

int n, m, counter = 0;
vector<int> adjList[505];
bool inv[505];

void bfs() {
	inv[1] = 1;
	for (auto it: adjList[1]) {
		if (!inv[it]){
			counter++;
			inv[it] = 1;
		}
		for(auto it_: adjList[it]) {
			if (inv[it_]) continue;
			counter++;
			inv[it_] = 1;
		}
	}
}

int32_t main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
  	memset(inv, 0, sizeof inv);
	cin >> n >> m;
	for (int i = 0; i < m; ++i) {
		int a, b; cin >> a >> b;
		adjList[a].push_back(b);
		adjList[b].push_back(a);
	}
	bfs();
	cout << counter;
  	return 0;
}
