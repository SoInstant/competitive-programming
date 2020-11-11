#include <bits/stdc++.h>
using namespace std;

#define int long long // ~~~LONG LONG MAN~~~
#define inf_ll 1e18
#define inf_int 1e9
#define NEWLINE cout << "\n"

int p[100005]; // parent
int power[100005]; // powers
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

int n, m;

int32_t main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; ++i) {
		cin >> power[i];
		p[i] = i;
	}
	for (int i = 0; i < m; ++i) {
		int a, b, p_a, p_b;
		cin >> a >> b;
		p_a = find_set(a);
		p_b = find_set(b);
		if (p_a == p_b) {cout << -1 << "\n";continue;}
		if (power[p_a] > power[p_b]) {
			merge_set(p_b,p_a);
			cout << p_a << "\n";
		}
		else {
			merge_set(p_a,p_b);
			cout << p_b << "\n";
		}
	}
  	return 0;
}
