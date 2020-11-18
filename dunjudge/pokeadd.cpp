#include <bits/stdc++.h>
using namespace std;

#define int long long // ~~~LONG LONG MAN~~~
#define inf_ll 1e18
#define inf_int 1e9
#define NEWLINE cout << "\n"

int	x, y, b;

vector<int> to_base(int number, int base) {
  vector<int> converted_number;
  if (number == 0) converted_number.push_back(0);
  while(number > 0) {
    converted_number.push_back(number % base);
    number = number / base;
  }
  return converted_number;
}

int from_base(vector<int> based_number, int base) {
  int original_number = 0;
  for(int i=based_number.size()-1; i>=0; i--) {
    original_number = original_number * base;
    original_number += based_number[i];
  }
  return original_number;
}


int32_t main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
	cin >> x >> y >> b;
	vector<int> xb = to_base(x,b), yb = to_base(y,b), newnum;
	int size_xb = xb.size(), size_yb = yb.size(), longest = max(size_xb,size_yb);
	for (int i = 0; i < longest - size_xb; ++i) xb.push_back(0);
	for (int i = 0; i < longest - size_yb; ++i) yb.push_back(0);
	for (int i = 0; i < longest; ++i) {
		newnum.push_back((xb[i]+yb[i])%b);
	}
	int ans = from_base(newnum,b);
	vector<int> ans_b = to_base(ans,b);
	reverse(ans_b.begin(),ans_b.end());
	for (auto it: ans_b) cout << it;
  	return 0;
}
