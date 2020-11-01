#include <bits/stdc++.h>
using namespace std;

#define int long long // ~long long man~
typedef pair<int,int> pi;

int n, sum = 0;
int a[20005], b[20005];
vector<pi> c;

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for (int i = 0; i < n; ++i) {cin >> a[i];} // base price of jobs
	for (int i = 0; i < n; ++i) {cin >> b[i];} // extra cost of jobs
	for (int i = 0; i < n; ++i) {c.push_back(pi(b[i],a[i]));} // put extra cost first for sorting
	sort(c.rbegin(),c.rend());
	for (int i = 0; i < n; ++i) {sum += (c[i].second + i*c[i].first);}
	cout << sum;
	return 0;
}
