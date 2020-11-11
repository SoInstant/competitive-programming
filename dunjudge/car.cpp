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

int n, e, ans = 0;
vector<pii> edges;
int p[1000005];
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
  	for (int i = 0; i < n; ++i) p[i] = i;
  	for (int i = 0; i < e; ++i) {
		int a, b, d;
		cin >> a >> b >> d;
		edges.push_back(mp(d,mp(a,b)));
	}
	sort(edges.begin(),edges.end());
	for (auto edge: edges) {
		if (find_set(1) == find_set(n)) break;
		else if(find_set(edge.s.f) == find_set(edge.s.s)) continue;
		else {
			ans = edge.f;
			merge_set(edge.s.f,edge.s.s);
		}
	}
	cout << ans;
  	return 0;
}
