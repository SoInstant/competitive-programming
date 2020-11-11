#include <bits/stdc++.h>
using namespace std;

#define inf_ll 1e18
#define inf_int 1e9
#define NEWLINE cout << "\n"

int n, c, room;

int p[10000005];
int find_set(int x){
	if (p[x] == x) return x;  
	p[x] = find_set(p[x]);
	return p[x];
}
bool same_set(int a, int b) {
	return find_set(a) == find_set(b);
}
void merge_set(int a, int b) {// merge a into b
	p[find_set(a)] = find_set(b);
}

int32_t main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
	cin >> n >> c;
	for (int i = 1; i <= n; ++i) p[i] = i;
	for (int i = 0; i < c; ++i) {
		int x;
		cin >> x;
		room = find_set(x);
		cout << room << "\n";
		if (room == 1) merge_set(1,n);
		else merge_set(room, room -1);
	}
  	return 0;
}
