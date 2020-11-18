#include <bits/stdc++.h>
using namespace std;

struct node {
	int s, _s, e, _e, m, v, lazy; // start, end, middle, value, lazyadd
	node *l, *r; // left child, right child
	node (int _s, int _e) {
		s = _s; e = _e; m = (s + e) / 2;
		v = 0, lazy = 0; // or wtv u want it to initalise with
		if (s!=e) { // if self is not leaf node
			l = new node(s, m);
			r = new node(m+1, e);
		}
	}
	int value() {// for lazy propagation
		if (s==e) { // if self is leaf node
			v +=  lazy; lazy = 0;
			return v;
		}
} *root;

int n;

int32_t main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
	cin >> n;
	root = new node(0,n);
	for (int i = 0; i < n; ++i) {
		int ai; cin >> ai;
		root.update(i,ai);
	}
  	return 0;
}
