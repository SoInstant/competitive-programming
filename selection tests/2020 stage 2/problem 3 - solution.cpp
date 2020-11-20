#include <bits/stdc++.h>
using namespace std;
long long q, a, b, c, d;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> q;
	for (int i = 0; i < q; ++i) {
		cin >> a >> b >> c >> d;
		long long lower = 0, upper = 100000;
		while (upper - lower > 1) {
			long long m = (upper + lower)/2;
			if (a*pow(m,3) + b*pow(m,2) + c*m >= d) upper = m;
			else lower = m;
		}
		cout << upper << "\n";
	}
	return 0;
}
