#include <bits/stdc++.h>
using namespace std;

#define int long long // ~~~LONG LONG MAN~~~

int ft1[100005], ft2[100005], n, m;

int ls(int x) {return (x & (-x));}

void update(int x, int y, int v) {//updates from x to y inclusive
	y++;
	for (int tx = x; tx <= n; tx += ls(tx)) ft1[tx] += v, ft2[tx] -= v*(x-1);
	for (int ty = y; ty <= n; ty += ls(ty)) ft1[ty] -= v, ft2[ty] += v*(y-1);
}

int sum (int x) {// sum up to x inclusive
	int res = 0;
	for (int tx = x; tx; tx -= ls(tx)) res += ft1[tx]*x + ft2[tx];
	return res;
}

int32_t main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
  	cin >> n;
  	for (int i = 1; i <= n; ++i) {
		int ai; cin >> ai;
		update(i,i,ai);
	}
	cin >> m;
	for (int i = 0; i < m; ++i) {
		int t; cin >> t;
		if (t == 0) {
			int x, y;
			cin >> x >> y;
			cout << sum(y+1) - sum(x) << "\n";
		} else {
			int a, b, c;
			cin >> a >> b >> c;
			update(a+1,b+1,c);
		}
	}
  	return 0;
}
