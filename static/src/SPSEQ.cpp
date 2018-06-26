#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

#define X first
#define Y second
#define pb push_back
#define EL printf("\n")
#define sz(A) (int) A.size()
#define FOR(i,l,r) for (int i=l;i<=r;i++)
#define FOD(i,r,l) for (int i=r;i>=l;i--)


const int N = 1e5+5;
int n, a[N], f[N], g[N], s[N], maxL;


int LIS(int i) {
  int l = 1, r = maxL, j = 0;
  while (l <= r) {
    int m = (l+r)/2;
    if (a[i] > a[s[m]]) {
      j = m;
      l = m+1;
    } else r = m-1;
  }
  if (j == maxL) s[++maxL] = i;
  if (a[i] < a[s[j+1]]) s[j+1] = i;
  return j;
}


int main()
{
//  freopen("INP.TXT", "r", stdin);
//  freopen("OUT.TXT", "w", stdout);

  cin >> n;
  FOR(i,1,n) scanf("%d", &a[i]);

  f[1] = 1; s[1] = 1; maxL = 1;
  FOR(i,2,n) {
    int j = LIS(i);
    f[i] = j+1;
  }

  g[1] = 1; s[1] = n; maxL = 1;
  FOD(i,n-1,1) {
    int j = LIS(i);
    g[i] = j+1;
  }


  int res = 0;
  FOR(i,1,n)
    res = max(res, 2*min(f[i], g[i]) - 1);

  cout << res << endl;

  return 0;
}












