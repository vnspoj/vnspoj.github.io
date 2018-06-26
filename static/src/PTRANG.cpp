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


const int N = 6005;
int n, L, a[N], f[N];

int main()
{
//  freopen("INP.TXT", "r", stdin);
//  freopen("OUT.TXT", "w", stdout);

  cin >> n >> L;
  FOR(i,1,n) scanf("%d", &a[i]);

  FOR(i,1,n) {
    f[i] = L+1;
    int j = i, S = a[i];
    while (j > 0 && S <= L) {
      f[i] = min(f[i], max(f[j-1], L-S));
      S += a[--j];
    }
  }

  cout << f[n] << endl;

  return 0;
}












