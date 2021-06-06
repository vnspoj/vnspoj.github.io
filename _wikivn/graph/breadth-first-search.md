---
layout: wiki_vn
wiki: true
title: "Breadth First Search (BFS) | 🇻🇳"
---

Breadth first search hay BFS là một trong những giải thuật cơ bản và cần thiết trong lý thuyết đồ thị. BFS là nền tảng cho những kỹ thuật tìm kiếm khác trong đồ thị. BFS cũng thường được gọi là **kỹ thuật loang** trên đồ thị do cách mà BFS thực hiện là duyệt đồ thị **theo chiều ngang**.

Đường đi tìm thấy từ giải thuật BFS là đường đi ngắn nhất từ đỉnh nguồn $u$ tới các đỉnh còn lại.

Độ phức tạp của giải thuật BFS là $O(m + n)$ với $n$ là số đỉnh và $m$ là số cạnh trên đồ thị.

## Giải thuật BFS

Ý tưởng đơn giản của giải thuật BFS như sau: lần lượt duyệt từng đỉnh trên đồ thị, tại mỗi đỉnh loang ra tất cả các đỉnh liền kề với nó chưa được duyệt trước đó và đưa vào hàng đợi queue để lần lượt xử lý. Do đó thứ tự duyệt các đỉnh sẽ ưu tiên theo chiều ngang như hình minh hoạ sau

<p align="center"><img src="https://i.imgur.com/Nvn98M5.png" width="80%"></p>

## Implementation

Hiện thực đơn giản của BFS như sau:

```cpp
vector<vector<int>> adj;  // adjacency list representation
int n; // number of nodes
int s; // source vertex

queue<int> q;
vector<bool> used(n);
vector<int> d(n), p(n);

q.push(s);
used[s] = true;
p[s] = -1;
while (!q.empty()) {
    int v = q.front();
    q.pop();
    for (int u : adj[v]) {
        if (!used[u]) {
            used[u] = true;
            q.push(u);
            d[u] = d[v] + 1;
            p[u] = v;
        }
    }
}
```

Đường đi ngắn nhất từ đỉnh nguồn tới đỉnh $u$:

```cpp
if (!used[u]) {
    cout << "No path!";
} else {
    vector<int> path;
    for (int v = u; v != -1; v = p[v])
        path.push_back(v);
    reverse(path.begin(), path.end());
    cout << "Path: ";
    for (int v : path)
        cout << v << " ";
}
```

## Ứng dụng của BFS

+ Tìm đường đi ngắn nhất từ đỉnh nguồn tới các đỉnh còn lại trong đồ thị không trọng số.
+ Tìm các thành phầm liên thông trong đồ thị vô hướng trong thời gian $O(n + m)$.
+ Tìm solution cho một problem, thường là trò chơi, số bước di chuyển ít nhất để đạt được trạng thái sau cùng, sau khi biểu diễn các trạng thái về các đỉnh của đồ thị.
+ Tìm tất cả các cạnh nằm trên bất kì đường đi ngắn nhất nào của một cặp đỉnh $(a, b)$ cho trước:
  + BFS từ $a$ và $b$, lưu vào $d_a []$ và $d_b []$
  + Với mỗi cạnh $(u, v)$, điều kiện để thuộc đường đi ngắn nhất bất kì giữa $a$ và $b$ là: $d_a [u] + 1 + d_b [v] = d_a [b]$
+ Tìm tất cả các đỉnh nằm trên bất kì đường đi ngắn nhất nào của một cặp đỉnh $(a, b)$ cho trước:
  + BFS từ $a$ và $b$, lưu vào $d_a []$ và $d_b []$
  + Với mỗi đỉnh $v$, điều kiện để $v$ thuộc đường đi ngắn nhất bất kì giữa $a$ và $b$ là: $d_a [v] + d_b [v] = d_a [b]$


## Practice Problems

[Xem một số bài trên vnspoj](https://vnspoj.github.io/category/bfs)

* [SPOJ: AKBAR](http://spoj.com/problems/AKBAR)
* [SPOJ: NAKANJ](http://www.spoj.com/problems/NAKANJ/)
* [SPOJ: WATER](http://www.spoj.com/problems/WATER)
* [SPOJ: MICE AND MAZE](http://www.spoj.com/problems/MICEMAZE/)
* [Timus: Caravans](http://acm.timus.ru/problem.aspx?space=1&num=2034)
* [DevSkills - Holloween Party](https://devskill.com/CodingProblems/ViewProblem/60)
* [DevSkills - Ohani And The Link Cut Tree](https://devskill.com/CodingProblems/ViewProblem/150)
* [SPOJ - Spiky Mazes](http://www.spoj.com/problems/SPIKES/)
* [SPOJ - Four Chips (hard)](http://www.spoj.com/problems/ADV04F1/)
* [SPOJ - Inversion Sort](http://www.spoj.com/problems/INVESORT/)
* [Codeforces - Shortest Path](http://codeforces.com/contest/59/problem/E)
* [SPOJ - Yet Another Multiple Problem](http://www.spoj.com/problems/MULTII/)
* [UVA 11392 - Binary 3xType Multiple](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2387)
* [UVA 10968 - KuPellaKeS](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1909)
* [Codeforces - Police Stations](http://codeforces.com/contest/796/problem/D)
* [Codeforces - Okabe and City](http://codeforces.com/contest/821/problem/D)
* [SPOJ - Find the Treasure](http://www.spoj.com/problems/DIGOKEYS/)
* [Codeforces - Bear and Forgotten Tree 2](http://codeforces.com/contest/653/problem/E)
* [Codeforces - Cycle in Maze](http://codeforces.com/contest/769/problem/C)
* [UVA - 11312 - Flipping Frustration](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2287)
* [SPOJ - Ada and Cycle](http://www.spoj.com/problems/ADACYCLE/)
* [CSES - Labyrinth](https://cses.fi/problemset/task/1193)
* [CSES - Message Route](https://cses.fi/problemset/result/794325/)
* [CSES - Monsters](https://cses.fi/problemset/task/1194)

