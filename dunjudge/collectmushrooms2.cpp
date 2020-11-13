#include <bits/stdc++.h>
using namespace std;

#define inf_int 1e9

typedef pair<int,int> pi;

struct node {
	int s, e, m; // start, end, middle
	pi v; // deliciousness, negative index
	node *l, *r; // left child, right child
	node (int _s, int _e) {
		s = _s; e = _e; m = (s + e) / 2;
		v = make_pair(0,0); // or wtv u want it to initalise with
		if (s!=e) { // if self is not leaf node
			l = new node(s, m);
			r = new node(m+1, e);
		}
	}
	void update(int p, int nv) {
		if (s == e) {v.first = nv; v.second = -s; return;} // if self is leaf node update self
		if (p > m) r -> update(p, nv); // if target is at the left of midpt
		if (p <= m) l -> update(p,nv); // if target is at the right of midpt
		v = max(l -> v, r -> v); // modifier function (wtv u want)
	}
	pi query(int a, int b) { // returns max value from a to b inclusive
		if (s == a && e == b) return v; // check if range corresponds to range of node
		if (a > m) return r -> query(a, b); // if range is completely to the right of midpt
		if (b <= m) return l -> query(a, b); // if range is completely to the left of midpt
		return max(l -> query(a, m), r -> query(m+1, b)); // split range along midpt
	}
} *root;

int n, m;

int32_t main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
	cin >> n >> m;
	root = new node(0, n);
	for (int i = 0; i < n; ++i) {
		int di; cin >> di;
		root -> update(i,di);
	}
	for (int i = 0; i < m; ++i) {
		int a, b;
		cin >> a >> b;
		pi ans = root -> query(a,b);
		cout << ans.first << "\n";
		root -> update(-ans.second,-1);
	}
  	return 0;
}
