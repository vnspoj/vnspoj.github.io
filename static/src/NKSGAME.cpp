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
int n, a[N], b[N];

void update(int i, int j, int &res) {
  if (0 <= i && i < n && abs(a[i] + b[j]) < res)
    res = abs(a[i] + b[j]);
}

int main()
{
//  freopen("INP.TXT", "r", stdin);
//  freopen("OUT.TXT", "w", stdout);

  scanf("%d", &n);
  FOR(i,0,n-1) scanf("%d", &a[i]);
  FOR(i,0,n-1) scanf("%d", &b[i]);

  sort(a, a+n);

  int res = abs(a[0] + b[0]);
  FOR(j,0,n-1) {
    int i = lower_bound(a, a+n, -b[j])-a;
    update(i, j, res);
    update(i-1, j, res);
  }

  printf("%d\n", res);

  return 0;
}












