#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int s;
	cin >> s;
	if (s<20){cout << "U";}
	else if (s < 35) {cout << "E";}
	else if (s < 50) {cout << "D";}
	else if (s < 60) {cout << "C";}
	else if (s < 75) {cout << "B";}
	else if (s < 91) {cout << "A";}
	else {cout << "A*";}
	return 0;
}
