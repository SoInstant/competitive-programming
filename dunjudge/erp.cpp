#include <bits/stdc++.h>
using namespace std;

#define int long long // ~~~LONG LONG MAN~~~
#define inf_ll 1e18
#define inf_int 1e9
#define mp make_pair
typedef pair<int,int> pi;

int n, e, k;

int32_t main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
	cin >> n >> e;
	vector<pi> adjList[n];
	int dist0[n], distn[n];
	for (int i = 0; i < e; ++i) {
		int a, b, f;
		cin >> a >> b >> f;
		adjList[a].push_back(mp(b,f));
		adjList[b].push_back(mp(a,f));
	}
	// run from source node = 0
	memset(dist0, -1, sizeof dist0);
	priority_queue<pi, vector<pi>, greater<pi>> pq; // distance, node
	pq.push(mp(0, 0)); dist0[0] = 0;
	while(!pq.empty()){
		pi c = pq.top();
		pq.pop();
		if(c.first != dist0[c.second]) continue;
		for (auto i : adjList[c.second]) {
			if(dist0[i.first] == -1 || dist0[i.first] > c.first + i.second){
				dist0[i.first] = c.first + i.second;
				pq.push(mp(dist0[i.first], i.first));
			}
		}
	}
	// run from source node n-1
	memset(distn, -1, sizeof distn);
	pq.push(mp(0, n-1)); distn[n-1] = 0;
	while(!pq.empty()){
		pi c = pq.top();
		pq.pop();
		if(c.first != distn[c.second]) continue;
		for (auto i : adjList[c.second]) {
			if(distn[i.first] == -1 || distn[i.first] > c.first + i.second){
				distn[i.first	] = c.first + i.second;
				pq.push(mp(distn[i.first], i.first));
			}
		}
	}
	cin >> k;
	for (int i = 0; i < k; ++i) {
		int x, y;
		cin >> x >> y;
		if (dist0[x] + distn[y] > dist0[n-1] && distn[x] + dist0[y] > distn[0]) cout << -1 << "\n";
		else if (dist0[x] == -1 || distn[x] == -1 || dist0[y] == -1 || distn[y] == -1) cout << -1 << "\n";
		else cout << max(dist0[n-1] - (dist0[x] + distn[y]) - 1, dist0[n-1] - (distn[x] + dist0[y]) - 1) << "\n";
	}
	
  	return 0;
}
