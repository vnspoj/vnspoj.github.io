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


const int N = 10005;
const int M = 15005;

struct edge {
  int u, v, t;
};

int n, m, pa[N];
edge e[M];

bool cmp(edge x, edge y) {
  return x.t < y.t;
}

int findSet(int u) {
  if (u == pa[u]) return u;
  return pa[u] = findSet(pa[u]);
}

void read() {
  cin >> n >> m;
  FOR(i,1,m) {
    scanf("%d %d %d", &e[i].u, &e[i].v, &e[i].t);
  }
}

void solve() {
  sort(e+1,e+m+1, cmp);
  FOR(i,1,n) pa[i] = i;

  ll res = 0ll;
  FOR(i,1,m) {
    int u = findSet(e[i].u);
    int v = findSet(e[i].v);
    if (u == v) continue;
    pa[v] = u;
    res += (ll) e[i].t;
  }

  cout << res << endl;
}

int main()
{
//  freopen("INP.TXT", "r", stdin);
//  freopen("OUT.TXT", "w", stdout);

  read();
  solve();


  return 0;
}












