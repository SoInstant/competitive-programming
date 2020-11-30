#include <bits/stdc++.h>
using namespace std;

#define int long long // ~~~LONG LONG MAN~~~
#define inf_ll 1e18
#define inf_int 1e9
#define NEWLINE cout << "\n"

int r, c, counter = 0;
bool visited[105][105]; char grid[105][105];
int dx[] = {0,  1,  0, -1};
int dy[] = {1,  0, -1,  0};

void bfs(int i, int j) {
	visited[i][j] = 1;
	for (int k = 0; k < 4; ++k) {
		if (i + dx[k] < 0 || j + dy[k] < 0 || i + dx[k] >= r || j + dy[k] >= c) continue;
		if (!visited[i + dx[k]][ j + dy[k]] && grid[i + dx[k]][ j + dy[k]] == 'H') bfs(i + dx[k], j + dy[k]);
	}
}

int32_t main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
	cin >> r >> c;
	memset(visited, 0, sizeof visited);
	for (int i = 0; i < r; ++i) {
		for (int j = 0; j < c; ++j) cin >> grid[i][j];
	}
	for (int i = 0; i < r; ++i) {
		for (int j = 0; j < c; ++j) {
			if (!visited[i][j] && grid[i][j] == 'H') {
				bfs(i, j); counter++;
			}
		}
	}
	cout << "Oh, bother. There are " << counter <<" pools of hunny.";
  	return 0;
}
