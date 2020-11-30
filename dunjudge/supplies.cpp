#include <bits/stdc++.h>
using namespace std;

#define int long long // ~~~LONG LONG MAN~~~
#define inf_ll 1e18
#define inf_int 1e9
#define NEWLINE cout << "\n"
#define f first
#define s second

typedef pair<int, int> pi;

int n, e, h, t;

int32_t main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
	cin >> n >> e >> h >> t;
	vector<pi> adjList[n];
	for (int i = 0; i < e; ++i) {
		int a, b, c; cin >> a >> b >> c;
		adjList[a].push_back(pi(b,c));
	}
	// Dijkstra
	priority_queue<pi, vector<pi>, greater<pi>> pq; // distance, node (sorted by ascending order)
	int dist1[n], dist2[n];
	memset(dist1, -1, sizeof dist1);
	memset(dist2, -1, sizeof dist2);

	pq.push(pi(0, h)); dist1[h] = 0;
	while(!pq.empty()){
		pi c = pq.top();
		pq.pop();
		if(c.f != dist1[c.s]) continue;
		for (auto i : adjList[c.s]) {
			if(dist1[i.f] == -1 || dist1[i.f] > c.f + i.s){
				dist1[i.f] = c.f + i.s;
				pq.push(pi(dist1[i.f], i.f));
			}
		}
	}
	pq.push(pi(0, t)); dist2[t] = 0;
	while(!pq.empty()){
		pi c = pq.top();
		pq.pop();
		if(c.f != dist2[c.s]) continue;
		for (auto i : adjList[c.s]) {
			if(dist2[i.f] == -1 || dist2[i.f] > c.f + i.s){
				dist2[i.f] = c.f + i.s;
				pq.push(pi(dist2[i.f], i.f));
			}
		}
	}
	if (dist1[t] == -1 || dist2[h] == -1) cout << -1;
	else cout << dist1[t] + dist2[h];
  	return 0;
}
