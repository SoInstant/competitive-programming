#include <bits/stdc++.h>
using namespace std;

#define int long long // ~~~LONG LONG MAN~~~

int t;
string alphabet = "abcdefghijklmnopqrstuvwxyz";

vector<int> to_base(int number, int base) {
  vector<int> converted_number;
  while(number > 0) {
    converted_number.push_back(number % base);
    number = number / base;
  }
  return converted_number;
}


int32_t main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
  	cin >> t;
	for (int i = 0; i < t; ++i) {
		int n, k;
		cin >> n >> k;
		vector<int> a = to_base(n,k);
		reverse(a.begin(),a.end());
		for (auto it: a) {
			if (it == 0) cout << alphabet[k-1];
			else cout << alphabet[it-1];
		}
		cout << "\n";
	}
  	return 0;
}
