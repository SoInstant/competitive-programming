#include <bits/stdc++.h>
using namespace std;

#define int long long // ~~~LONG LONG MAN~~~
#define inf_ll 1e18
#define inf_int 1e9
#define NEWLINE cout << "\n"

int n;
string s1, s2;

inline string lowercase(string s) 
{ 
    int n = s.size(); 
    for (int i = 0; i < n; ++i) {
		if (s[i] >= 'A' && s[i] <= 'Z') s[i] = s[i] - 'A' + 'a';
	}
    return s; 
} 
  

int32_t main() {
	ios::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
	cin >> s1 >> s2;
	n = s1.size();
	s1 = lowercase(s1); s2 = lowercase(s2);
	for (int i = 0; i < n; ++i) {
		if (s1[i] - 'a' < s2[i] - 'a') {cout << -1; return 0;}
		else if (s1[i] - 'a' > s2[i] - 'a') {cout << 1; return 0;}
	}
	cout << 0;
  	return 0;
}
