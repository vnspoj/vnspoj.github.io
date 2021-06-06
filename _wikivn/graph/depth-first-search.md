---
layout: wiki_vn
wiki: true
title: "Depth First Search (DFS) | 🇻🇳"
---

Depth First Search hay DFS là một giải thuật cơ bản và quan trọng trong lý thuyết đồ thị. DFS là nền tảng để xây dựng nên các giải thuật quan trọng khác như tìm đường đi, tìm thành phần liên thông, cây khung, chu trình, luồng, cặp ghép, ...

Giải thuật DFS tìm ra các đường đi theo thứ tự từ đỉnh nguồn $u$ tới mọi đỉnh khác. Trên đồ thị cây, giữa 2 đỉnh bất kì chỉ có 1 đường đi đơn duy nhất do đó DFS tìm ra đường đi ngắn nhất giữa 2 đỉnh trên cây.

Độ phức tạp của giải thuật DFS là $O(m + n)$ với $n$ là số đỉnh và $m$ là số cạnh trên đồ thị.

## Giải thuật DFS

Ý tưởng đơn giản của DFS là duyệt lần lượt từng đỉnh trên đồ thị, tới đỉnh nào đánh dấu lại đỉnh đó đã được duyệt và tiếp tục duyệt các đỉnh liền kề tiếp theo, quay lui khi đã duyệt xong các đỉnh.

Hiện thực giải thuật bằng kỹ thuật đệ quy quay lui đơn giản hoặc sử dụng stack.

<p align="center"><img src="https://i.imgur.com/p51NejL.png" width="60%"></p>

## Implementation

Hiện thực đơn giản nhất cho DFS như sau:

```cpp
vector<vector<int>> adj; // graph represented as an adjacency list
int n; // number of vertices

vector<bool> visited;

void dfs(int v) {
	visited[v] = true;
	for (int u : adj[v]) {
		if (!visited[u])
			dfs(u);
    }
}
```

Mở rộng DFS: lưu thêm thời gian thăm đỉnh vào / ra dùng cho việc kiểm tra thứ tự thăm đỉnh ở một số giải thuật khác.

```cpp
vector<vector<int>> adj; // graph represented as an adjacency list
int n; // number of vertices

vector<int> color;

vector<int> time_in, time_out;
int dfs_timer = 0;

void dfs(int v) {
	time_in[v] = dfs_timer++;
	color[v] = 1;
	for (int u : adj[v])
		if (color[u] == 0)
			dfs(u);
	color[v] = 2;
	time_out[v] = dfs_timer++;
}
```

## Ứng dụng của DFS

Một số ứng dụng của giải thuật DFS:

+ Tìm đường đi từ đỉnh nguồn $u$ tới mọi đỉnh trong đồ thị.
+ Kiểm tra cha của các đỉnh trên đồ thị cây: sử dụng thời gian duyệt đỉnh vào/ra trên cây khi duyệt để xác định cặp đỉnh $u,v$ có quan hệ tiền bối / hậu bối của nhau hay không. Chi tiết có thể xem trong bài viết [tìm cha chung gần nhất trên cây LCA](../graph/lca_binary_lifting).
+ [Tìm tổ tiên chung gần nhất (LCA: lowest common ancestor) trên cây](../graph/lca_binary_lifting).
+ Topological sorting.
+ Kiểm tra và tìm chu trình trong đồ thị.
+ Tìm thanh phần liên thông mạnh trong đồ thị có hướng.
+ Tìm cầu trong đồ thị vô hướng.

## Practice Problems

[Xem một số bài trên vnspoj](https://vnspoj.github.io/category/dfs)

* [SPOJ: ABCPATH](http://www.spoj.com/problems/ABCPATH/)
* [SPOJ: EAGLE1](http://www.spoj.com/problems/EAGLE1/)
* [Codeforces: Kefa and Park](http://codeforces.com/problemset/problem/580/C)
* [Timus:Werewolf](http://acm.timus.ru/problem.aspx?space=1&num=1242)
* [Timus:Penguin Avia](http://acm.timus.ru/problem.aspx?space=1&num=1709)
* [Timus:Two Teams](http://acm.timus.ru/problem.aspx?space=1&num=1106)
* [SPOJ - Ada and Island](http://www.spoj.com/problems/ADASEA/)
* [UVA 657 - The die is cast](https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=598)
* [SPOJ - Sheep](http://www.spoj.com/problems/KOZE/)
* [SPOJ - Path of the Rightenous Man](http://www.spoj.com/problems/RIOI_2_3/)
* [SPOJ - Validate the Maze](http://www.spoj.com/problems/MAKEMAZE/)
* [SPOJ - Ghosts having Fun](http://www.spoj.com/problems/GHOSTS/)
* [Codeforces - Underground Lab](http://codeforces.com/contest/781/problem/C)
* [DevSkills - Maze Tester](https://devskill.com/CodingProblems/ViewProblem/3)
* [DevSkills - Tourist](https://devskill.com/CodingProblems/ViewProblem/17)
* [Codeforces - Anton and Tree](http://codeforces.com/contest/734/problem/E)
* [Codeforces - Transformation: From A to B](http://codeforces.com/contest/727/problem/A)
* [Codeforces - One Way Reform](http://codeforces.com/contest/723/problem/E)
* [Codeforces - Centroids](http://codeforces.com/contest/709/problem/E)
* [Codeforces - Generate a String](http://codeforces.com/contest/710/problem/E)
* [Codeforces - Broken Tree](http://codeforces.com/contest/758/problem/E)
* [Codeforces - Dasha and Puzzle](http://codeforces.com/contest/761/problem/E)
* [Codeforces - Making genome In Berland](http://codeforces.com/contest/638/problem/B)
* [Codeforces - Road Improvement](http://codeforces.com/contest/638/problem/C)
* [Codeforces - Garland](http://codeforces.com/contest/767/problem/C)
* [Codeforces - Labeling Cities](http://codeforces.com/contest/794/problem/D)
* [Codeforces - Send the Fool Futher!](http://codeforces.com/contest/802/problem/K)
* [Codeforces - The tag Game](http://codeforces.com/contest/813/problem/C)
* [Codeforces - Leha and Another game about graphs](http://codeforces.com/contest/841/problem/D)
* [Codeforces - Shortest path problem](http://codeforces.com/contest/845/problem/G)
* [Codeforces - Upgrading Tree](http://codeforces.com/contest/844/problem/E)
* [Codeforces - From Y to Y](http://codeforces.com/contest/849/problem/C)
* [Codeforces - Chemistry in Berland](http://codeforces.com/contest/846/problem/E)
* [Codeforces - Wizards Tour](http://codeforces.com/contest/861/problem/F)
* [Codeforces - Ring Road](http://codeforces.com/contest/24/problem/A)
* [Codeforces - Mail Stamps](http://codeforces.com/contest/29/problem/C)
* [Codeforces - Ant on the Tree](http://codeforces.com/contest/29/problem/D)
* [SPOJ - Cactus](http://www.spoj.com/problems/CAC/)
* [SPOJ - Mixing Chemicals](http://www.spoj.com/problems/AMR10J/)

