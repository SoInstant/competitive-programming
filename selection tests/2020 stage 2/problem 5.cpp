#include <bits/stdc++.h>
using namespace std;

#define int long long // ~long long man~

int n;

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	int a[n], b[n], who[n];
	for (int i = 0; i < n; ++i) {cin >> a[i];}
	for (int i = 0; i < n; ++i) {cin >> b[i];}
	int time_taken = 0;
	for (int i = 0; i < n; ++i) {
		if (i-2>=0) {
			if (who[i-1] == who[i-2]) {
				if (who[i-1] == 0){
					time_taken += b[i];
					who[i] = 1;
					continue;
				} else {
					time_taken += a[i];
					who[i] = 0;
					continue;
				}
			}
		}
		if (a[i] == b[i]) {
			if (who[i-1] == 0){time_taken += b[i]; who[i] = 1;} 
			else {time_taken += a[i]; who[i] = 1;}
		}
		else if (a[i] < b[i]) {
			time_taken += a[i];
			who[i] =0;
		}
		else {
			time_taken += b[i];
			who[i] = 1;
		}
	}
	cout << time_taken;
	return 0;
}
