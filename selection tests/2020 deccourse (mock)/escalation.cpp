#include <bits/stdc++.h>
using namespace std;

#define int long long // ~~~LONG LONG MAN~~~
#define inf_ll 1e18
#define inf_int 1e9
#define NEWLINE cout << "\n"
#define f first
#define s second

typedef pair<int, int> pi;
typedef pair<int, pi> pii;

int n, q, max_e = 0, p[100005], v[100005], ei;
vector<pii> edgeList;

int find_set(int x){
    if (p[x] == x) return x;
    p[x] = find_set(p[x]);
    return p[x];
}
bool same_set(int a, int b) {
    return find_set(a) == find_set(b);
}
void merge_set(int a, int b) { // merge a into b's set
    p[find_set(a)] = find_set(b);
}

int32_t main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
  	for (int i = 0; i < 100005; ++i) p[i] = i; // each node is its own parent
	cin >> n >> q;
	for (int i = 0; i < n - 1; ++i) {
		int a, b, l; cin >> a >> b >> l;
		max_e = max(max_e, l);
		edgeList.push_back(pii(l,pi(a,b)));
	}
	int p_e[max_e+1]; memset(p_e, 0, sizeof p_e);
	sort(edgeList.begin(), edgeList.end());
	
	for (int i = 0; i < n; ++i) cin >> v[i];
	for (auto edge: edgeList) {
		if (same_set(edge.s.f,edge.s.s)) continue;
		int temp = v[find_set(edge.s.f)];
		v[find_set(edge.s.f)] = 0;
		merge_set(edge.s.f,edge.s.s);
		v[find_set(edge.s.s)] += temp;
		p_e[edge.f] = max(p_e[edge.f], *max_element(v,v+100005));
	}
	for (int i = 0; i < q; ++i) {
		cin >> ei;
		if (ei > max_e) cout << p_e[max_e];
		else cout << p_e[ei];
		NEWLINE;
	}
  	return 0;
}
