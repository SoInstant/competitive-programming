#include <bits/stdc++.h>
using namespace std;

#define int long long // ~long long man~

int n;

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	if (n < 3) cout << "That's a terrible potato!";
	else if(n <= 5) cout << "That's a normal potato!";
	else if (n <= 8) cout << "That's a good potato!";
	else cout << "OMG POTATOES!!!";
	return 0;
}
