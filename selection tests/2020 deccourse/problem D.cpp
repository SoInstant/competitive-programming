#include <bits/stdc++.h>
using namespace std;

#define int long long // ~~~LONG LONG MAN~~~
#define inf_ll 1e18
#define inf_int 1e9
#define NEWLINE cout << "\n"
#define f first
#define s second

typedef pair<int, int> pi;

int dx[] = {0,  1,  0, -1};
int dy[] = {1,  0, -1,  0};

int n, m, r, c, ans = 0;
vector<pi> babe;
vector<pi> sources;

struct node {
	int s, _s, e, _e, m; // start, end, middle
	pi v; // number of spots and index
	node *l, *r; // left child, right child
	node (int _s, int _e) {
		s = _s; e = _e; m = (s + e) / 2;
		v = pi(0,0); // or wtv u want it to initalise with
		if (s!=e) { // if self is not leaf node
			l = new node(s, m);
			r = new node(m+1, e);
		}
	}
	void update(int p, int nv) {
		if (s == e) {v = pi(v.f + nv, -p); return;} // if self is leaf node update self
		if (p > m) r -> update(p, nv); // if target is at the left of midpt
		if (p <= m) l -> update(p,nv); // if target is at the right of midpt
		v = max(l -> v, r -> v); // modifier function (wtv u want)
	}
	pi rmq(int a, int b) { // returns max value from a to b inclusive
		if (s == a && e == b) return v; // check if range corresponds to range of node
		if (a > m) return r -> rmq(a, b); // if range is completely to the right of midpt
		if (b <= m) return l -> rmq(a, b); // if range is completely to the left of midpt
		return max(l -> rmq(a, m), r -> rmq(m+1, b)); // split range along midpt
	}
} *root;

int32_t main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
	cin >> n >> m >> r >> c;
	root = new node(0, r+c+1);
	for (int i = 0; i < n; ++i) {
		int li, ui; cin >> li >> ui;
		babe.push_back(pi(li, ui-li)); // start point, range
	}
	sort(babe.begin(), babe.end());
	for (int i = 0; i < m; ++i) {
		int aj, bj; cin >> aj >> bj;
		sources.push_back(pi(aj-1, bj-1));
	}
	int dist[r][c]; bool visited[r][c];
	memset(dist, -1, sizeof dist);
	memset(visited, 0, sizeof visited);
	queue<pi> q;
	for (auto source: sources) {
		q.push(source);
		visited[source.f][source.s] = 1;
		dist[source.f][source.s] = 0;
		root -> update(0, 1);
	}
	while(!q.empty()) {
		pi v = q.front(); q.pop();
		for (int i = 0; i < 4; ++i) {
			if (v.f+dx[i] < 0 || v.s+dy[i] < 0 || v.f+dx[i] >= r || v.s+dy[i] >= c) continue;
			if (visited[v.f+dx[i]][v.s+dy[i]]) continue;
			q.push(pi(v.f+dx[i],v.s+dy[i]));
			visited[v.f+dx[i]][v.s+dy[i]] = 1;
			dist[v.f+dx[i]][v.s+dy[i]] = dist[v.f][v.s] + 1;
			root -> update(dist[v.f+dx[i]][v.s+dy[i]], 1);
		}
	}
	for (auto it: babe) {
		pi spot = root -> rmq(it.f,it.f + it.s);
		if (spot.f == 0) continue;
		else {
			root -> update(-spot.s, -1);
			ans++;
		}
	}
	cout << ans;
  	return 0;
}
