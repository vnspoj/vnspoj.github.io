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


const int N = 305;

int n, w[N], d[N], c[N][N], dd[N];

struct data {
  int u, d;
  bool operator < (const data &o) const {
    return d > o.d;
  }
};

priority_queue<data> st;

void read() {
  cin >> n;
  FOR(i,1,n) scanf("%d", &w[i]);
  FOR(u,1,n) FOR(v,1,n) scanf("%d", &c[u][v]);
}

void solve() {
  FOR(u,1,n) {
    d[u] = w[u];
    st.push({u, d[u]});
  }

  int res = 0;
  while (!st.empty()) {
    data t = st.top();
    st.pop();
    int u = t.u;
    if (d[u] < t.d) continue;
    res += d[u]; dd[u] = 1;
    FOR(v,1,n) {
      if (u != v && !dd[v] && c[u][v] < d[v]) {
        d[v] = c[u][v];
        st.push({v, d[v]});
      }
    }
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












