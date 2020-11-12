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

int v, e, q;
vector<pi> adjList[500005];
int quality[500005];

int32_t main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
	cin >> v >> e >> q;
	for (int i = 0; i < e; ++i) {
		int v1, v2, qr;
		cin >> v1 >> v2 >> qr;
		adjList[v1].push_back(pi(v2,qr));
		adjList[v2].push_back(pi(v1,qr));
	}
	for (int i = 1; i <= v; ++i) quality[i] = inf_ll;
  	return 0;
}
