#include <bits/stdc++.h>
using namespace std;

#define int long long // ~long long man~
#define mp make_pair

typedef pair<int,int> pi;

int n, m;
priority_queue<pi> dp;

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	pi a[n];
	for (int i = 0; i < n; ++i) {
		int b, c;
		cin >> b >> c;
		a[i] = mp(b,c);
	}
	
	return 0;
}
