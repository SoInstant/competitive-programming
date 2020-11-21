#include <bits/stdc++.h> // Include every standard library 
using namespace std; 
  
typedef long long LL; 
typedef pair<int, int> pii; 
typedef pair<LL, LL> pll; 
typedef pair<string, string> pss;

typedef vector<int> vi;
typedef vector<vi> vvi; // 2D vector of int 
typedef vector<pii> vii; // vector of pairs
typedef vector<LL> vl;
typedef vector<vl> vvl; // 2D vector of LL 
  
double EPS = 1e-9; // comp for doubles
LL INF_LL = 1e18;
int INF_INT = 1e9;
double PI = acos(-1);

int dx[] = {0,  1,  0, -1};
int dy[] = {1,  0, -1,  0};
int diagx[8] = { -1, 0, 0, 1, -1, -1, 1, 1 }; 
int diagy[8] = { 0, 1, -1, 0, -1, 1, -1, 1 }; 
  
#ifdef TESTING 
#define DEBUG fprintf(stderr, "====TESTING====\n") 
#define VALUE(x) cerr << "The value of " << #x << " is " << x << endl 
#define debug(...) fprintf(stderr, __VA_ARGS__) 
#else 
#define DEBUG 
#define VALUE(x) 
#define debug(...) 
#endif 

/* Iterator */
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a)) 
#define FORN(a, b, c) for (int(a) = (b); (a) <= (c); ++(a)) 
#define FORD(a, b, c) for (int(a) = (b); (a) >= (c); --(a)) 
#define FORSQ(a, b, c) for (int(a) = (b); (a) * (a) <= (c); ++(a)) 
#define FORC(a, b, c) for (char(a) = (b); (a) <= (c); ++(a)) 
#define FOREACH(a, b) for (auto&(a) : (b)) 
#define REP(i, n) FOR(i, 0, n) 
#define REPN(i, n) FORN(i, 1, n)
#define TC(t) while (t--) 

/* Operations */
#define MAX(a, b) a = max(a, b) 
#define MIN(a, b) a = min(a, b) 
#define SQR(x) ((LL)(x) * (x)) 
#define RESET(a, b) memset(a, b, sizeof(a))
#define PERMUTE next_permutation 

/* Pairs */
#define f first 
#define s second 
#define mp make_pair 
#define pb push_back

/* Containers */
#define ALL(v) v.begin(), v.end() 
#define SIZE(v) (int)v.size() 
#define SORT_ASC(v) sort(ALL(v))
#define SORT_DSC(v,type) sort(ALL(v),greater<(type)>())
#define REVERSE(v) reverse(ALL(v)) 

/* Array */
#define ALLA(arr, sz) arr, arr + sz 
#define SORTA(arr, sz) sort(ALLA(arr, sz)) 
#define REVERSEA(arr, sz) reverse(ALLA(arr, sz)) 

/* Helping Functions */
inline string IntToString(LL a) 
{ 
    char x[100]; 
    sprintf(x, "%lld", a); 
    string s = x; 
    return s; 
}
  
inline LL StringToInt(string a) 
{ 
    char x[100]; 
    LL res; 
    strcpy(x, a.c_str()); 
    sscanf(x, "%lld", &res); 
    return res; 
} 
  
inline string uppercase(string s) 
{ 
    int n = SIZE(s); 
    REP(i, n) 
    if (s[i] >= 'a' && s[i] <= 'z') 
        s[i] = s[i] - 'a' + 'A'; 
    return s; 
} 
  
inline string lowercase(string s) 
{ 
    int n = SIZE(s); 
    REP(i, n) 
    if (s[i] >= 'A' && s[i] <= 'Z') 
        s[i] = s[i] - 'A' + 'a'; 
    return s; 
}
inline LL qexp(int a, int b, int m) {
    int ans = 1;
    while (b > 0) {
		if (b%2 == 1) ans = (ans * a) % m;
			a = (a * a) % m;
			b /= 2;
		}
    return ans;
}
