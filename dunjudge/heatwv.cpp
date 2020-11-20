#include <bits/stdc++.h>
using namespace std;

#define int long long // ~~~LONG LONG MAN~~~
#define inf_ll 1e18
#define inf_int 1e9
#define NEWLINE cout << "\n"
#define f first
#define s second

typedef pair<int,int> pi;

int t, c, ts, te;
vector<pi> adjList[2505]; // node, weight
bool visited[2505]; int dist[2505];
int32_t main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
	cin >> t >> c >> ts >> te;
	for (int i = 0; i < c; ++i) {
		int r1, r2, ci;
		cin >> r1 >> r2 >> ci;
		adjList[r1].push_back(pi(r2, ci));
		adjList[r2].push_back(pi(r1, ci));
	}
	
	memset(dist, -1, sizeof dist);
	priority_queue<pi, vector<pi>, greater<pi>> pq; // weight, node
	pq.push(pi(0,ts)); dist[ts] = 0;
	while(!pq.empty()){
		pi c = pq.top(); pq.pop();
		if(c.f != dist[c.s]) continue;
		for (auto i : adjList[c.s]) {
			if(dist[i.f] == -1 || dist[i.f] > c.f + i.s){
				dist[i.f] = c.f + i.s;
				pq.push(pi(dist[i.f], i.f));
			}
		}
	}
	cout << dist[te];
	return 0;
}
