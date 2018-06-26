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


const int N = 3e5+5;
const int M = 1e5+5;

struct data {
  int idx, x, y;
  bool operator < (const data &o) const {
    return x < o.x || (x == o.x && y < o.y);
  }
};

int n, t[M], res[N];
data a[N];

int retreive(int x) {
  int ans = 0;
  for (;x>0;x-=x&-x) ans += t[x];
  return ans;
}

void update(int x, int v) {
  for (;x<M;x+=x&-x) t[x] += v;
}

int main()
{
//  freopen("INP.TXT", "r", stdin);
//  freopen("OUT.TXT", "w", stdout);

  cin >> n;
  FOR(i,1,n) {
    int x, y;
    scanf("%d%d", &x, &y);
    a[i] = { i, x, y };
  }

  sort(a+1, a+n+1);

  int i, j;
  for (i=1;i<=n;i=j+1) {
    for (j=i;j<n && a[i].x == a[j+1].x && a[i].y == a[j+1].y; j++);
    int cnt = retreive(a[i].y);
    FOR(k,i,j) res[a[k].idx] = cnt;
    update(a[i].y, j-i+1);
  }

  FOR(i,1,n) printf("%d\n", res[i]);

  return 0;
}












