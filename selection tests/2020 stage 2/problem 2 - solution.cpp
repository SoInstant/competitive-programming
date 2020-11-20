#include <bits/stdc++.h>
using namespace std;

int n;
string s;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> s;
	stack<int> st;
	for (int i = 0; i < n; ++i) {
		if (s[i] == 'B') st.push(0);
		else {
			if (!st.empty()) st.pop();
			else st.push(1);
		}
	}
	cout << (n-st.size())/2;
}
