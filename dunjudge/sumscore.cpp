#include <bits/stdc++.h>
using namespace std;

#define int long long // ~long long man~

int n, sum = 0;

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	while (n != -1) {
		sum += n;
		cin >> n;
	}
	cout << sum;
	return 0;
}
