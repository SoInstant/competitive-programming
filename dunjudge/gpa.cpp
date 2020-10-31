#include <bits/stdc++.h>
using namespace std;

#define int long long // ~long long man~

int a;

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> a;
	if (a<40) cout << "0.8";
	else if (a<45) cout << "1.2";
	else if (a<50) cout << "1.6";
	else if (a<55) cout << "2.0";
	else if (a<60) cout << "2.4";
	else if (a<65) cout << "2.8";
	else if (a<70) cout << "3.2";
	else if (a<80) cout << "3.6";
	else cout << "4.0";
	return 0;
}
