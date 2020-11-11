#include <bits/stdc++.h>
using namespace std;

#define int long long // ~~~LONG LONG MAN~~~
#define inf_ll 1e18
#define inf_int 1e9
#define NEWLINE cout << "\n"
int r, c, ans= 0;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0,-1, 0};

int32_t main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
	cin >> r >> c;
	int field[r+2][c+2];
	memset(field, 0, sizeof field);
	for (int i = 1; i <=r; ++i) {
		for (int j = 1; j <=c; ++j) {
			cin >> field[i][j];
		}
	}
	int x = 1, y = 1, max_f;
	while (x != c && y != r) {
		max_f = max({field[x-1][y],field[x][y+1],field[x+1][y],field[x][y-1]});
		for (int i = 0; i < 4; ++i) {
			if (field[x+dx[i]][y+dy[i]] == max_f) {
				ans +=  field[x][y];
				field[x][y] = 0;
				x +=  dx[i]; y+= dy[i];
			}
		}
	}
	cout << ans;
  	return 0;
}
