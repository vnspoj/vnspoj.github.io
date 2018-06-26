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


const int N = 1005;
int n, a[N], F[N];

int main()
{
//  freopen("INP.TXT", "r", stdin);
//  freopen("OUT.TXT", "w", stdout);

  cin >> n;
  FOR(i,1,n) scanf("%d", &a[i]);

  a[++n] = 10001;
  FOR(j,1,n) {
    F[j] = 1;
    FOR(i,1,j-1) if (a[i] < a[j]) F[j] = max(F[j], F[i]+1);
  }

  cout << F[n]-1;

  return 0;
}












