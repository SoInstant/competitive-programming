#include <bits/stdc++.h>
using namespace std;

#define int long long // ~long long man~

int h, w, n;
string full = "", partial = "", emp = "";

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> h >> w >> n;
	for (int i = 0; i < w; ++i) {
		full += "X";
		emp += "O";
	}
	for (int i = 0; i < n%w; ++i) {partial += "X";}
	for (int i = 0; i < w-n%w; ++i) {partial += "O";}
	for (int i = 0; i < n/w; ++i) {cout << full << "\n";}
	cout << partial << "\n";
	for (int i = 0; i < h-n/w-1; ++i) {cout << emp << "\n";}
	return 0;
}
