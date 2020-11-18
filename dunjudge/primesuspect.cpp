#include <bits/stdc++.h>
using namespace std;

#define int long long // ~~~LONG LONG MAN~~~
#define inf_ll 1e18
#define inf_int 1e9
#define NEWLINE cout << "\n"

typedef pair<int,int> pi;

int n;
vector<pi> sus;

bool isPrime(int n) {
	if (n <= 3) return (n > 1);
	if (n%2 == 0 || n%3 == 0) return false;
	int i = 5;
	while (i * i <= n) {
		if (n%(i) == 0 || n%(i+2) == 0) return false;
		i += 6;
	}
	return true;
}

int32_t main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
	cin >> n;
	for (int i = n; i > 0; --i) {
		int age; cin >> age;
		if (isPrime(i)) {
			sus.push_back(pi(age, i));
		}
	}
	sort(sus.begin(),sus.end(), greater<pi>());
	cout << sus[0].second;
  	return 0;
}
