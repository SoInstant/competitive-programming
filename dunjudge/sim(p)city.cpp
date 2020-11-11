#include <bits/stdc++.h>
using namespace std;

#define int long long // ~~~LONG LONG MAN~~~
#define inf_ll 1e18
#define inf_int 1e9
#define NEWLINE cout << "\n"
#define f first
#define s second
#define mp make_pair

typedef pair<int,int> pi;
typedef pair<int, pi> pii;

int n, r, d, ans=0;
int p[300005];
vector<pii> edges;

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
	cin >> n >> r;
	for (int i = 0; i <= n; ++i) p[i] = i;
	for (int i = 1; i <= n; ++i) {// construct imaginary node with edges
		cin >> d;
		edges.push_back(mp(d,mp(0,i)));
	}
	for (int i = 0; i < r; ++i) {
		int a, b, c;
		cin >> a >> b >> c;
		edges.push_back(mp(c,mp(a+1,b+1)));
	}
	sort(edges.begin(),edges.end());
	for (auto edge: edges) {
		int pa, pb;
		pa = find_set(edge.s.f); pb = find_set(edge.s.s);
		if (pa == pb) continue;
		else {
			ans += edge.f;
			merge_set(edge.s.f, edge.s.s);
		}
	}
	cout << ans;
  	return 0;
}
