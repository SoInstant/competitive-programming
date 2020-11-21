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
typedef pair<int, pii> piii;

int n, q;
deque<piii> v;

int32_t main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
	cin >> n >> q;
	int a[n];
	memset(a, 0, sizeof a);
	
	for (int i = 0; i < q; ++i) {
		int li, ri, xi;
		cin >> li >> ri >> xi;
		v.push_back(piii(ri-li,pii(xi,pi(li, ri))));
	}
	sort(v.begin(),v.end(),greater<piii>());
	while (!v.empty()) {
		piii c1 = v.front(); v.pop_front();
		if (c1.s.s.f == c1.s.s.s) a[c1.s.s.s] = a[c1.s.f];
	}
  	return 0;
}
