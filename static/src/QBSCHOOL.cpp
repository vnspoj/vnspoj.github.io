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


const int N = 5005;
const ll MAXD = 1e12 + 5;

struct data {
  int u;
  ll d;
  bool operator < (const data &o) const {
    return d > o.d;
  }
};

int n, m;
ll d[N], f[N];
vector<ii> a[N];
priority_queue<data> st;


void read() {
  cin >> n >> m;
  int k, u, v, l;
  FOR(i,1,m) {
    scanf("%d %d %d %d", &k, &u, &v, &l);
    a[u].pb({v, l});
    if (k == 2) a[v].pb({u, l});
  }
}

void solve() {
  d[1] = 0; f[1] = 1;
  FOR(i,2,n) d[i] = MAXD;
  st.push({1, d[1]});
  while (!st.empty()) {
    data t = st.top();
    st.pop();
    int u = t.u;
    if (d[u] < t.d) continue;
    for (auto k : a[u]) {
      int v = k.X, l = k.Y;
      if (d[v] < d[u] + l) continue;
      if (d[v] > d[u] + l) {
        d[v] = d[u] + l;
        f[v] = f[u];
        st.push({v, d[v]});
      } else {
        f[v] += f[u];
      }
    }
  }

  cout << d[n] << " " << f[n];
}

int main()
{
//  freopen("INP.TXT", "r", stdin);
//  freopen("OUT.TXT", "w", stdout);

  read();
  solve();


  return 0;
}












