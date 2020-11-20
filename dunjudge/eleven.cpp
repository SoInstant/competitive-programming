#include <bits/stdc++.h>
using namespace std;

int a, b;

int main() {
    string s; cin >> s;
    for (int i = 0; i < (int)s.size(); ++i) {
        if (i%2==0) a += s[i] - '0';
        else b += s[i] - '0';
    }
    string ans = abs(a-b)%11==0?"YES":"NO";
    cout << ans;
    return 0;
}
