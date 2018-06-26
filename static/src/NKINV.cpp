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

const int N = 60005;

int n, t[N], x;
ll res = 0ll;

int retrieve(int x) {
  int ans = 0;
  for (;x<N;x+=x&-x) ans += t[x];
  return ans;
}

void update(int x) {
  for (;x>0;x-=x&-x) t[x]++;
}

int main()
{
//  freopen("INP.TXT", "r", stdin);
//  freopen("OUT.TXT", "w", stdout);

  cin >> n;
  FOR(i,1,n) {
    scanf("%d", &x);
    res += retrieve(x+1);
    update(x);
  }

  cout << res << endl;


  return 0;
}












