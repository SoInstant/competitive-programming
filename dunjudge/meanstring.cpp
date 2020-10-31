#include <bits/stdc++.h>
using namespace std;

#define int long long // ~long long man~

int n;

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	int sum = 0;
	for (int i =0; i <n; ++i) {
		int a;
		cin >> a;
		sum += a;
	}
	cout << sum/n;
	return 0;
}
