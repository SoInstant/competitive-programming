#include <bits/stdc++.h>
using namespace std;

#define int long long // ~long long man~


int n,m,sum=0,ans=0;
int a[60005];

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	for (int i = 0; i < 60005; ++i) {a[i] = 1e18;}
	cin >> n >> m;
	for (int i = 0; i < m; ++i) {cin >> a[i];}
	sort(a,a+60005);
	for (int i = 0; i < m; ++i) {
		if (sum + a[i] <= n) {
			sum += a[i];
			ans++;
		} else {break;}
	}
	cout << ans;
	return 0;
}
