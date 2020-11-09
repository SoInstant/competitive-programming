#include <bits/stdc++.h>
using namespace std;

#define int long long // ~long long man~
typedef pair<int,int> pi;

int n, m, k, s;

int32_t main() {
	/*
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);*/
	cin >> n >> m >> k >> s;
	vector<int> supply[k],supply_dist[n];
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
	for (int i = 0; i < k; ++i) {// for every type of supply
		//dykestra
		priority_queue<pi, vector<pi>, greater<pi>> pq; //weight, node
		int dist[n];
		memset(dist, -1, sizeof(dist));
		for (auto it: supply[i]) {
			pq.push(make_pair(0, it));
			dist[it] = 0;
		}
		while(!pq.empty()){
			pi c = pq.top();
			pq.pop();
			if(c.first != dist[c.second]) continue;
			for (auto it : adjList[c.second]) {
				if(dist[it.first] == -1 || dist[it.first] > c.first + it.second){
					dist[it.first] = c.first + it.second;
					pq.push(make_pair(dist[it.first], it.first));
				}
			}
		}
		//end dykestra
		for (int j = 0; j < n; ++j) {supply_dist[j].push_back(dist[j]);}
	}
	for (int i = 0; i < n; ++i) {
		sort(supply_dist[i].begin(),supply_dist[i].end());
	}
	for (int i = 0; i < n; ++i) {
		int sum = 0;
		for(int j = 0; j < s; ++j) {sum += supply_dist[i][j];}
		cout << sum << "\n";
	}
	return 0;
}
