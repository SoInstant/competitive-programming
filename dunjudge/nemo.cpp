#include <bits/stdc++.h>
using namespace std;

#define int long long // ~~~LONG LONG MAN~~~
#define inf_ll 1e18
#define inf_int 1e9
#define NEWLINE cout << "\n"
#define mp make_pair
#define f first
#define s second

typedef pair<int,int> pi;
vector<pair<pi, pi>> edges;

int n, e, tc;
int p[50005];

int find_set(int x){
	if (p[x] == x) return x;  
	p[x] = find_set(p[x]);
	return p[x];
}
bool same_set(int a, int b) {
	return find_set(a) == find_set(b);
}
void merge_set(int a, int b) { 
	p[find_set(a)] = find_set(b);
}

int32_t main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
	cin >> n >> e;
	for (int i = 0; i < e; ++i) {
		int a, b, o, c;
		cin >> a >> b >> o >> c;
		edges.push_back(mp(mp(a,b),mp(o,c)));
	}
	cin >> tc;
	for (int i = 0; i < tc; ++i) {
		int x, y, t;
		cin >> x >> y >> t;
		for (int i = 0; i < n; ++i) p[i] = i;
		for (auto edge: edges) {
			if (t < edge.s.f || edge.s.s < t) continue;	//if t is not between o and c inclusive
			merge_set(edge.f.f,edge.f.s);
		}
		if (find_set(x) == find_set(y)) cout << "Y\n";
		else cout << "N\n";
	}
  	return 0;
}
