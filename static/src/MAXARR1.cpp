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

const int N = 1e5;
int T, n, a[N+1], f[N+1];

void initializeArray() {
  a[0] = 0; f[0] = 0;
  a[1] = 1; f[1] = 1;
  FOR(i,2,N) {
    a[i] = a[i/2] + i%2 * a[i/2+1];
    f[i] = max(f[i-1], a[i]);
  }
}

int main()
{
//  freopen("INP.TXT", "r", stdin);
//  freopen("OUT.TXT", "w", stdout);

  initializeArray();

  cin >> T;
  FOR(i,1,T) {
    scanf("%d", &n);
    printf("%d\n", f[n]);
  }


  return 0;
}












