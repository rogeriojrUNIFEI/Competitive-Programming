#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef pair< ll, ll > ii;
typedef vector< ll > vi;
typedef vector< ii > vii;

#define INF 0x3F3F3F3F
#define LINF 0x3F3F3F3F3F3F3F3FLL
#define pb push_back
#define mp make_pair
#define pq priority_queue
#define LSONE(s) ((s)&(-s))
#define DEG_to_RAD(X)   (X * PI / 180)
#define F first
#define S second
#define PI 2*acos(0)

#ifdef ONLINE_JUDGE
#define debug(args...)
#else
#define debug(args...) fprintf(stderr,args)
#endif

const int N = 1e5 + 10;

char s[N];
int n, k;

inline void main2() {
  scanf("%d %d", &n, &k);
  scanf(" %s", s);
  bool ok = 0;
  int tot = 0;
  for(int i = 0; i < n; ++i) {
    if(s[i] == '1') tot = 0;
    else tot++;
    ok |= (tot > k);
  }
  puts(ok ? "yes" : "no");
}

int main() {
  int t; scanf("%d", &t);
  while(t--) main2();
  return 0;
}