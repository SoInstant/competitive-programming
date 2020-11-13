#include <bits/stdc++.h>
using namespace std;

#define int long long // ~~~LONG LONG MAN~~~

int x, y;

vector<int> to_base(int number, int base) {
  vector<int> converted_number;
  while(number > 0) {
    converted_number.push_back(number % base);
    number = number / base;
  }
  int size_num = converted_number.size();
  for (int i = 0; i <= 9-size_num; ++i) {converted_number.push_back(0);}// make it 9 digit
  reverse(converted_number.begin(),converted_number.end());
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
	cin >> x >> y;
	vector<int> b_x = to_base(x,2), b_y = to_base(y,2), new_num;
	for (int i = 0; i <= 19; ++i) {
		if (i%2 == 0) new_num.push_back(b_x[i/2]);
		else new_num.push_back(b_y[i/2]);
	}
	reverse(new_num.begin(),new_num.end());
	cout << from_base(new_num,2);
  	return 0;
}
