#include <bits/stdc++.h>
using namespace std;

#define int long long // ~long long man~

int n, a[10005];

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	int counter = 1, curr = 3;
	a[0] = 2;
	while (counter != n) {
		if (curr <= 1) {curr++; continue;}
		else if (curr <= 3) {a[counter] = curr; curr++; counter++; continue;}
		if (curr%2 == 0) {curr++;continue;}
		else {
			int upper = sqrt(curr);
			bool prime = true;
			for (int i = 2; i <= upper; ++i) {
				if (curr%i == 0) {prime = false; break;}
			}
			if (prime == true){a[counter] = curr;counter++;}
			curr++;
		}
	}
	cout << a[n-1];
	return 0;
}
