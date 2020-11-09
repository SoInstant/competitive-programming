#include <bits/stdc++.h>
using namespace std;

#define int long long // ~~~LONG LONG MAN~~~

int r, c, d, k;

int32_t main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
	cin >> r >> c >> d >> k;
	char f[r+1][c+1];
	int ss[r+1][c+1];
	memset(ss, 0, sizeof ss);
	for (int i = 1; i <= r; ++i) {
		for (int j = 1; j <= c; ++j) {
			cin >> f[i][j];
			if (f[i][j] == 'S') ss[i][j] = 1;
		}
	}
	
	// precompute static sum
	for (int i = 1; i <= r; ++i) {	
		for (int j = 1; j <= c; ++j) {
			ss[i][j] = ss[i-1][j]+ss[i][j-1]-ss[i-1][j-1]+ss[i][j];
		}
	}
	int ans = 0;
	for (int i = 1; i<=r; ++i) { // for every row (y)
		for (int j = 1; j <= c; ++j) { // for every column (x)
			if (f[i][j] == 'M') {
				int x1 = j - d, x2 = j + d;
				int y1 = i - d, y2 = i + d;
				if (x1 <= 0) x1 = 1; if(x2 > c) x2 = c;
				if (y1 <= 0) y1 = 1; if(y2 > r) y2 = r;
				int n_sprinklers = ss[y2][x2] - ss[y1-1][x2] - ss[y2][x1-1] + ss[y1-1][x1-1];
				if (n_sprinklers >= k) ans++;
			}
		}	
	}
	cout << ans;
  	return 0;
}
