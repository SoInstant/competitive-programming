#include <bits/stdc++.h>
using namespace std;

#define int unsigned long long // ~~~LONG LONG MAN~~~
#define inf_ll 1e18
#define inf_int 1e9
#define NEWLINE cout << "\n"

int b;

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
	cin >> b;
	vector<int> changed = to_base(b,2);
	cout << accumulate(changed.begin(),changed.end(), 0);
  	return 0;
}
