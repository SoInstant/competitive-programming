#include <bits/stdc++.h>
using namespace std;

#define int long long // ~~~LONG LONG MAN~~~
#define inf_ll 1e18
#define inf_int 1e9
#define NEWLINE cout << "\n"

int m, k;
char c;

int32_t main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
	cin >> m >> k;
	deque<int> deck;
	for (int i = 0; i < m; ++i) deck.push_back(i);
	while (cin >> c) {
		if (c == '.') break;
		if (c == 'A') {
			deck.push_back(deck.front());
			deck.pop_front();
		}
		else {
			int temp = deck.front(); deck.pop_front();
			deck.push_back(deck.front());
			deck.pop_front();
			deck.push_front(temp);
		}
	}
	cout << deck[k-1] << " " << deck[k] << " " << deck[k+1];
  	return 0;
}
