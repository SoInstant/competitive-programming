#include <bits/stdc++.h>
using namespace std;

#define int long long // ~long long man~

int n;
int a[3165];

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for (int i =0; i < 3165; ++i) {
		a[i] = i * i;
	}
	bool exists = find(begin(a), end(a), n) != end(a);
	
	if (exists) {cout << "yes";}
	else cout << "no";
	return 0;
}
