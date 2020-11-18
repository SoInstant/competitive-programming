#include <bits/stdc++.h>
using namespace std;

#define int long long // ~~~LONG LONG MAN~~~
#define f first
#define s second
typedef pair<int, int> pi; 
typedef pair<int, pi> pii; // sum, coord

int t, n, m;

int dx[] = {0, 1, 0,-1};
int dy[] = {1, 0,-1, 0};

int32_t main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
  	cin >> t;
  	for (int i = 0; i < t; ++i) {
		cin >> n >> m;
		int a[n+2][m+2];
		memset(a, 0, sizeof a);
		for (int i = 1; i <= n; ++i) {
			for (int j = 1; j <= m; ++j) {
				cin >> a[i][j];
			}
		}
		for (int i = 1; i <= n; ++i) {
			for (int j = 1; j <= m; ++j) {
				pii temp[] = {pii(-(a[i-1][j]+a[i][j]), pi(i-1, j)),
							 pii(-(a[i][j+1]+a[i][j]), pi(i, j+1)),
							 pii(-(a[i+1][j]+a[i][j]), pi(i+1, j)),
							 pii(-(a[i][j-1]+a[i][j]), pi(i, j-1))};
				sort(temp, temp+4,greater<pii>());
				if (temp[0].f < min({
					a[i-1][j]+a[i][j],
					a[i][j+1]+a[i][j],
					a[i+1][j]+a[i][j],
					a[i][j-1]+a[i][j]
				})) continue;
				else {
					a[temp[0].s.f][temp[0].s.s] *= -1;
					a[i][j] *= -1;
				}
				for (int c = 1; c<= n; ++c) {
					for (int b = 1; b <= m; ++b) {cout << a[c][b] << " ";}
					cout << "\n";
				}
			}
		}
		int sum = 0;
		for (int i = 1; i <= n; ++i) {
			for (int j = 1; j <= m; ++j) {
				sum += a[i][j];
			}
		}
		cout << sum << "\n";
	}
  	return 0;
}
