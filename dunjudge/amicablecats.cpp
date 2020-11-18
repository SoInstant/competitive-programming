#include <bits/stdc++.h>
using namespace std;

#define int long long // ~~~LONG LONG MAN~~~

int n;

int sum_pd(int n) {
	int sum = 0;
	for (int i = 1; i <= sqrt(n); ++i) {
		if (n%i ==0){
			sum += i;
			if (n/i != n && i*i != n) sum +=  n/i;
		}
	}
	return sum;
}

int32_t main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
	cin >> n;
	int partner = sum_pd(n);
	int ans = (sum_pd(partner) == n && n!=partner)?partner:-1;
	cout << ans;
  	return 0;
}
