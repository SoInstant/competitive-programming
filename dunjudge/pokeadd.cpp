#include <bits/stdc++.h>
using namespace std;

#define int long long // ~~~LONG LONG MAN~~~

int x, y, b;

vector<int> to_base(int number, int base) {
  vector<int> converted_number;
  while(number > 0) {
    converted_number.push_back(number % base);
    number = number / base;
  }
  reverse(converted_number.begin(), converted_number.end());
  return converted_number;
}
}


int32_t main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
	cin >> x >> y >> b;
	vector<int> xb = to_base_d(x,b), 
				yb=to_base_d(y,b), 
				nb;
}
