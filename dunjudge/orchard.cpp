#include <bits/stdc++.h>
using namespace std;

int h, w, ans = INT_MIN, ones;
char c;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> h >> w;
	int a[h+5][w+5], ss[h+5][w+5], column[w+5];
	memset(a, 0, sizeof a);
	memset(ss, 0, sizeof ss);
	memset(column, 0, sizeof column);
	
	for (int i = 1; i <= h; ++i) {
		for (int j = 1; j <= w; ++j) {
			cin >> c;
			if (c == '1') {
				a[i][j] = 1;
				ones++;
			} else {
				a[i][j] = -1;
			}
		}
	}
	for (int i = 1; i <= h; ++i) { // static sum of columns
		for (int j = 1; j <= w; ++j) ss[i][j] = ss[i-1][j] + a[i][j];
	}
	for (int i = 1; i <= h; ++i) {
		for (int j = i; j <= h; ++j) {
			for (int width = 1; width <= w; ++width) {
				column[width] = ss[j][width] - ss[i-1][width];
				column[width] = max(column[width], column[width] + column[width - 1]); // kadane
				ans = max(ans, column[width]);
			}
		}
	}
	cout << ones - ans;
}
