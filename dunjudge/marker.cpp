#include <bits/stdc++.h>
using namespace std;

#define int long long // ~~~LONG LONG MAN~~~
#define inf_ll 1e18
#define inf_int 1e9
#define NEWLINE cout << "\n"

int n, x, y;

int32_t main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
	cin >> n;
    for (int i = 0; i < n; ++i) {
        int a, c, d; char b, e;
        cin >> a >> b >> c >> e >> d;
        if (b == '+') {
            if (a + c == d) x++;
        } else if (b == '-') {
            if (a - c == d) x++;
        }
    }
    for (int i = 0; i < n; ++i) {
        int a, c, d; char b, e;
        cin >> a >> b >> c >> e >> d;
        if (b == '+') {
            if (a + c == d) y++;
        } else if (b == '-') {
            if (a - c == d) y++;
        }
    }
    cout << "Spongebob: " << x << "\n";
    cout << "Patrick: " << y << "\n";
  	return 0;
}
