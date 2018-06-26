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

priority_queue<int> st;
char c;
int x;
vector<int> a;
vector<int>::iterator it;

int main()
{
//  freopen("INP.TXT", "r", stdin);
//  freopen("OUT.TXT", "w", stdout);

  while (scanf("%c", &c) != EOF) {
    if (c == '+') {
      scanf("%d\n", &x);
      if (st.size() < 15000) st.push(x);
    } else {
      scanf("\n");
      if (!st.empty()) {
        int x = st.top();
        while (!st.empty() && st.top() == x) st.pop();
      }
    }
  }

  while (!st.empty()) a.push_back(st.top()), st.pop();

  it = unique(a.begin(), a.end());
  a.resize(distance(a.begin(), it));

  cout << a.size() << endl;
  for (auto x : a) printf("%d\n", x);

  return 0;
}












