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

int n, l, r, t[N];
ll f[N], res;
vector<ll> p;

void update(int x) {
  for (;x<=1+p.size();x+=x&-x) t[x]++;
}

int retrieve(int x) {
  int ans = 0;
  for (;x>0;x-=x&-x) ans += t[x];
  return ans;
}

int mapLTE(ll x) {
  return 1 + upper_bound(p.begin(), p.end(), x)-p.begin()-1;
}

int main()
{
//  freopen("INP.TXT", "r", stdin);
//  freopen("OUT.TXT", "w", stdout);

  int x;

  cin >> n >> l >> r;

  f[0] = 0ll;
  p.push_back(f[0]);

  FOR(i,1,n) {
    scanf("%d", &x);
    f[i] = f[i-1] + (ll) x;
    p.push_back(f[i]);
  }

  auto it = unique(p.begin(), p.end());
  p.resize(distance(p.begin(), it));
  sort(p.begin(), p.end());

  x = mapLTE(f[0]); update(x);
  FOR(j,1,n) {
    x = mapLTE(f[j]-l); res += retrieve(x);
    x = mapLTE(f[j]-r-1); res -= retrieve(x);
    x = mapLTE(f[j]);
    update(x);
  }

  cout << res << endl;

  return 0;
}












