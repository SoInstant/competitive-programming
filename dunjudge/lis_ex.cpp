#include <bits/stdc++.h>
using namespace std;

#define int long long // ~~~LONG LONG MAN~~~

int n;

int32_t main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; ++i) {
		int a;
		cin >> a;
		if (v.empty() || v.back() < a) v.push_back(a);
		else *(lower_bound(v.begin(),v.end(),a)) = a;
	}
	cout << v.size();
  	return 0;
}
