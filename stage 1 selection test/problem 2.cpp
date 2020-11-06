#include <bits/stdc++.h>
using namespace std;

int n;
string s;

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> s;
	int counter = 0;
	while ((int)s.size() > 1) {
		int index_bg = s.find("BG");
		int index_gg = s.find("GG");
		if (index_bg == -1) { // if there is no more BG
			if (index_gg == -1) break; //if there is no more GG
			else {
				counter++;
				s = s.substr(0,index_gg) + s.substr(index_gg+2);
			}
		}
		else {
			counter++;
			s = s.substr(0,index_bg) + s.substr(index_bg+2);
		}
		
	}
	cout << counter;
	return 0;
}
