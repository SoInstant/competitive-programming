#include <bits/stdc++.h>
using namespace std;

#define int long long // ~~~LONG LONG MAN~~~
#define inf_ll 1e18
#define inf_int 1e9
#define NEWLINE cout << "\n"

int h,w, pea =  0 , pot = 0;
char c;

int32_t main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
	cin >> h >> w;
	for (int i = 0; i < h*w; ++i) {
		cin >> c;
		if (c == 'O') pot++;
		else if (c == 'N') pea ++;
	}
	cout << pot << " " << pea;
	NEWLINE;
  	return 0;
}
