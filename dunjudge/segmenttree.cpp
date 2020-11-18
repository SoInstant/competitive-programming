#include <bits/stdc++.h>
using namespace std;

struct node {
	int s, _s, e, _e, m, v; // start, end, middle, value
	node *l, *r; // left child, right child
	node (int _s, int _e) {
		s = _s; e = _e; m = (s + e) / 2;
		v = 0; // or wtv u want it to initalise with
		if (s!=e) { // if self is not leaf node
			l = new node(s, m);
			r = new node(m+1, e);
		}
	}
	void update(int p, int nv) {
		if (s == e) {v = nv; return;} // if self is leaf node update self
		if (p > m) r -> update(p, nv); // if target is at the left of midpt
		if (p <= m) l -> update(p,nv); // if target is at the right of midpt
		v = min(l -> v, r -> v); // modifier function (wtv u want)
	}
	int rmq(int a, int b) { // returns min value from a to b inclusive
		if (s == a && e == b) return v; // check if range corresponds to range of node
		if (a > m) return r -> rmq(a, b); // if range is completely to the right of midpt
		if (b <= m) return l -> rmq(a, b); // if range is completely to the left of midpt
		return min(l -> rmq(a, m), r -> rmq(m+1, b)); // split range along midpt
	}
} *root;

void init(int N) {
	root = new node(0, N-1);
    return;
}

void update(int P, int V) {
	root->update(P, V);
    return;
}

int query(int A, int B) {
    return root->rmq(A,B);
}
