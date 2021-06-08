---
layout: wiki_vn
wiki: true
title: "Dijkstra Algorithm | Tìm đường đi ngắn nhất | 🇻🇳"
---

Giải thuật Dijkstra là giải thuật **tìm đường đi ngắn nhất** từ một đỉnh nguồn tới các đỉnh của một đồ thị **có hướng hoặc vô hướng**, với **trọng số các cạnh không âm**.

Xét một đồ thị $G$ có $n$ đỉnh và $m$ cạnh, các cạnh có hướng hoặc vô hướng có trọng số không âm. Bài toán đặt ra là tìm đường đi ngắn nhất từ đỉnh nguồn $s$ tới các đỉnh còn lại của $G$.

## Algorithm

Gọi $d[v]$ là độ dài đường đi ngắn nhất từ $s$ tới $v$, ta có $d[s] = 0$. Gán các giá trị ban đầu

$$d[v] = \infty,~ v \ne s$$

Gán $u[v] = true$ hoặc $u[v] = false$ để đánh dấu đỉnh $v$ đã được duyệt hay chưa trong giải thuật, khởi tạo:

$$u[v] = {\rm false}$$

Giải thuật Dijkstra thực hiện $n$ vòng lặp, mỗi vòng lặp chọn ra đỉnh $v$ chưa được duyệt có $d[v]$ tối thiểu. Khi đó tại vòng lặp đầu tiên, đỉnh được chọn là $s$.

Tại mỗi vòng lặp, khi một đỉnh $v$ được chọn, khi đó giá trị $d[v]$ là tối ưu (tức $d[v]$ lúc này đã là độ dài đường đi ngắn nhất từ $s$ tới $v$). Lúc này ta đánh dấu $u[v] = true$ và thực hiện tối ưu các đỉnh còn lại có cạnh kề với $v$. Cụ thể, với mỗi cạnh $(v, to)$, độ dài $len$, ta tối thiểu hoá giá trị $d[to]$ theo công thức đơn giản sau:

$$d[\text{to}] = \min (d[\text{to}], d[v] + len)$$

Sau $n$ vòng lặp, tất cả các định được gán là $u[v] = true$ và $d[v]$ là giá trị tối ưu đạt được.

### Lưu vết đường đi

Việc lưu vết đường đi này có thể thực hiện trong quá trình tối ưu giá trị $d[v]$ như sau: Gọi $p[v]$ là đỉnh liền trước của $v$ trên 1 trong các đường đi ngắn nhất tìm được. Khi đó tại bước tối ưu $d[to]$, ta thực hiện cập nhật lại $p[to]$:

$$p[\text{to}] = v$$

## Implementation

Độ phức tạp $O(n^2+m)$ với $n^2$ là chi phí cho $n$ vòng lặp để chọn ra đỉnh $v$ và $m$ là chi phí duyệt qua các cạnh của từng đỉnh được chọn.

Thông thường Dijkstra được hiện thực bằng **hàng đợi ưu tiên** (`heap` / `priority queue`) để giảm độ phức tạp xuống còn $O(n \log n + m)$. Tham khảo ở bài viết [Dijkstra on sparse graphs](../graph/dijkstra_sparse).

Dưới đây là hiện thực với độ phức tạp $O(n^2+m)$:

```cpp
const int INF = 1000000000;
vector<vector<pair<int, int>>> adj;

void dijkstra(int s, vector<int> & d, vector<int> & p) {
    int n = adj.size();
    d.assign(n, INF);
    p.assign(n, -1);
    vector<bool> u(n, false);

    d[s] = 0;
    for (int i = 0; i < n; i++) {
        int v = -1;
        for (int j = 0; j < n; j++) {
            if (!u[j] && (v == -1 || d[j] < d[v]))
                v = j;
        }
        
        if (d[v] == INF)
            break;
        
        u[v] = true;
        for (auto edge : adj[v]) {
            int to = edge.first;
            int len = edge.second;
            
            if (d[v] + len < d[to]) {
                d[to] = d[v] + len;
                p[to] = v;
            }
        }
    }
}
```

Truy vết đường đi:

```cpp
vector<int> restore_path(int s, int t, vector<int> const& p) {
    vector<int> path;

    for (int v = t; v != s; v = p[v])
        path.push_back(v);
    path.push_back(s);

    reverse(path.begin(), path.end());
    return path;
}
```

## Practice Problems

[Xem một số bài trên vnspoj](https://vnspoj.github.io/category/dijkstra)

* [Timus - Ivan's Car](http://acm.timus.ru/problem.aspx?space=1&num=1930) [Difficulty:Medium]
* [Timus - Sightseeing Trip](http://acm.timus.ru/problem.aspx?space=1&num=1004)
* [SPOJ - SHPATH](http://www.spoj.com/problems/SHPATH/) [Difficulty:Easy]
* [Codeforces - Dijkstra?](http://codeforces.com/problemset/problem/20/C) [Difficulty:Easy]
* [Codeforces - Shortest Path](http://codeforces.com/problemset/problem/59/E)
* [Codeforces - Jzzhu and Cities](http://codeforces.com/problemset/problem/449/B)
* [Codeforces - The Classic Problem](http://codeforces.com/problemset/problem/464/E)
* [Codeforces - President and Roads](http://codeforces.com/problemset/problem/567/E)
* [Codeforces - Complete The Graph](http://codeforces.com/problemset/problem/715/B)
* [TopCoder - SkiResorts](https://community.topcoder.com/stat?c=problem_statement&pm=12468)
* [TopCoder - MaliciousPath](https://community.topcoder.com/stat?c=problem_statement&pm=13596)
* [SPOJ - Ada and Trip](http://www.spoj.com/problems/ADATRIP/)
* [LA - 3850 - Here We Go(relians) Again](https://icpcarchive.ecs.baylor.edu/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1851)
* [GYM - Destination Unknown (D)](http://codeforces.com/gym/100625)
* [UVA 12950 - Even Obsession](https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=4829)
* [GYM - Journey to Grece (A)](http://codeforces.com/gym/100753)
* [UVA 13030 - Brain Fry](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=866&page=show_problem&problem=4918)
* [UVA 1027 - Toll](https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=3468)
* [UVA 11377 - Airport Setup](https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2372)
* [Codeforces - Dynamic Shortest Path](http://codeforces.com/problemset/problem/843/D)
* [UVA 11813 - Shopping](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2913)
* [UVA 11833 - Route Change](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=226&page=show_problem&problem=2933)
* [SPOJ - Easy Dijkstra Problem](http://www.spoj.com/problems/EZDIJKST/en/)
* [LA - 2819 - Cave Raider](https://icpcarchive.ecs.baylor.edu/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=820)
* [UVA 12144 - Almost Shortest Path](https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=3296)
* [UVA 12047 - Highest Paid Toll](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3198)
* [UVA 11514 - Batman](https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2509)
* [Codeforces - Team Rocket Rises Again](http://codeforces.com/contest/757/problem/F)
* [UVA - 11338 - Minefield](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2313)
* [UVA 11374 - Airport Express](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2369)
* [UVA 11097 - Poor My Problem](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2038)
* [UVA 13172 - The music teacher](https://uva.onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=5083)
* [Codeforces - Dirty Arkady's Kitchen](http://codeforces.com/contest/827/problem/F)
* [SPOJ - Delivery Route](http://www.spoj.com/problems/DELIVER/)
* [SPOJ - Costly Chess](http://www.spoj.com/problems/CCHESS/)
* [CSES - Shortest Routes 1](https://cses.fi/problemset/task/1671)
* [CSES - Flight Discount](https://cses.fi/problemset/task/1195)
* [CSES - Flight Routes](https://cses.fi/problemset/task/1196)


