#include <bits/stdc++.h>
using namespace std;

#define int long long // ~long long man~

int n;
unordered_set<int> us;

int factorial(int n) {
	if (n == 1) return 1;
	else return n * factorial(n-1);
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for (int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		us.insert(x);	
	}
	cout << factorial((int)us.size());
	return 0;
}
