#include <bits/stdc++.h>
using namespace std;

#define int long long // ~long long man~

int n, s;
double a[1005],ans = 0;

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	for (int i =0; i< 1005; ++i) {a[i] = 0;}
	cin >> n >> s;
	for (int i = 0; i < n; ++i) {cin >> a[i];}
	sort(a,a+1005,greater<double>());
	for (int i = 0; i < s; ++i) {a[i] /= 2;}
	for (int i = 0; i < n; ++i) {ans += a[i] * 2;}
	cout << ans;
	return 0;
}
