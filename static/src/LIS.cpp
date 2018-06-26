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


const int N = 3e4+5;
int n, a[N], f[N];

int main()
{
//  freopen("INP.TXT", "r", stdin);
//  freopen("OUT.TXT", "w", stdout);

  cin >> n;
  FOR(i,1,n) scanf("%d", &a[i]);

  f[1] = 1;
  int res = 1;
  FOR(i,2,n) {
    int l = 1, r = res, j = 0;
    while (l <= r) {
      int m = (l+r)/2;
      if (a[i] > a[f[m]]) {
        j = m;
        l = m+1;
      } else r = m-1;
    }
    if (j == res) f[++res] = i;
    if (a[i] < a[f[j+1]]) f[j+1] = i;
  }

  cout << res << endl;

  return 0;
}












