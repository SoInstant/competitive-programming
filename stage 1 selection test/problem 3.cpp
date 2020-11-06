#include <bits/stdc++.h>
using namespace std;

#define int long long // ~long long man~

int q, a, b, c, d;

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> q;
	for (int i = 0; i < q; ++i) {
		cin >> a >> b >> c >> d;
		for (int j = 1; j <= (int)cbrt(d)+1; ++j){
			if (a*pow(j,3)+b*pow(j,2)+c*pow(j,1) >= d) {
				cout << j << "\n";
				break;
			}
		}
	}
	return 0;
}
