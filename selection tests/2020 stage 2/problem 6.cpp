#include <bits/stdc++.h>
using namespace std;

#define int long long // ~long long man~
typedef pair<int,int> pi;

int n, m, k, s;

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m >> k >> s;
	vector<int> supply[k];
	vector<pi> adjList[n];
	for (int i = 0; i < n; ++i) {
		int t; cin >> t;
		supply[t-1].push_back(i);
	}
	for (int i = 0; i < m; ++i) {
		int a, b, w;
		cin >> a >> b >> w;
		adjList[a-1].push_back(make_pair(b-1,w));
		adjList[b-1].push_back(make_pair(a-1,w));
	}
	for (int i = 0; i < n; ++i) {
		//dykestra on every node
		priority_queue<pi, vector<pi>, greater<pi>> pq;
		int dist[n];
		memset(dist, -1, sizeof(dist));
		pq.push(make_pair(0, i)); dist[i] = 0;
		while(!pq.empty()){
			pi c = pq.top();
			pq.pop();
			if(c.first != dist[c.second]) continue;
			for (auto i : adjList[c.second]) {
				if(dist[i.first] == -1 || dist[i.first] > c.first + i.second){
					dist[i.first] = c.first + i.second;
					pq.push(make_pair(dist[i.first], i.first));
				}
			}
		}
		// end dykestra
		
		int supply_dist[k], sum = 0;
		for (int i = 0; i < k; ++i) { // for every supply
			supply_dist[i] = 1e18;
			for (auto it: supply[i]) { // for every town
				supply_dist[i] = min(supply_dist[i], dist[it]);
			}
		}
		sort(supply_dist, supply_dist + k);
		for (int i = 0; i < s; ++i) {
			sum += supply_dist[i];
		}
		cout << sum << "\n";
	}
	return 0;
}
