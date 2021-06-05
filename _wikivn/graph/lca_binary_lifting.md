---
layout: wiki_vn
wiki: true
title: "Lowest Common Ancestor - Binary Lifting (Cha chung gần nhất) | 🇻🇳"
title_en: "Lowest Common Ancestor - Binary Lifting"
---

Giải thuật tìm Cha (tổ tiên) chung gần nhất (LCA) trên cây với độ phức tạp $O(N \log N)$.

## Algorithm

### Cha thứ $2^j$ của node $i$: $up[i][j]$

Với mỗi node trên cây, tính sẵn các cha của node này theo các level $2^j$. Cụ thể gọi $up[i][j]$ là cha thứ $2^j$-th của node $i$ với $i=1...N$, $j=0...L$, với $L = \lceil \log N \rceil$ là max level của cây.

Từ đây cho phép ta jump lên các cha của bất kì node nào trong $O(\log N)$.

Việc tính $up[i][j]$ sử dụng [DFS](../../wiki/graph/depth-first-search) như sau:


<p align="center"><img src="https://i.imgur.com/jt5taOA.png" width="50%"></p>


Khi duyệt đến node $i$, ta thực hiện update lại các giá trị $up[i][j]$ với $j = 0..L$:

+ $up[i][0] = p$ với $p$ là cha trực tiếp khi duyệt đến node $i$.
+ $up[i][j] = up[up[i][j-1]][j-1]$ với $j=1..L$. Dễ thấy điều này vì $up$ của các cha của $i$ đã tính trước đó.

Chi phí tính $up[i]$ cho 1 node trong $O(L) = O(\log N)$. Tổng chi phí duyệt DFS và tính $up[i][j]$ là $O(N \log N)$.

### Time in / out khi duyệt node

Khi duyệt đến node $i$, ta ghi nhận lại time lần đầu duyệt đến $timein[i]$, và sau khi duyệt xong node $i$, ta ghi nhận thời gian rời khỏi node $i$ là $timeout[i]$.

Việc sử dụng $timein$ và $timeout$ cho ta biết được 1 node có phải là cha của 1 node khác hay không.

### Tìm cha chung gần nhất của $u, v$: $lca(u,v)$

Xét vị trí 2 node $u$, $v$ trên cây:

**Trường hợp 1 trong 2 node đã là cha của node còn lại**

Dựa vào $timein$, $timeout$ ta biết được vị trí này của 2 node.

**Trường hợp 2 node không là cha của nhau**

Đi từ gốc cây xuống (gốc cây luôn là cha chung của $u$, $v$), cho đến khi gặp node $x$ mà $x$ vẫn là cha của $u$ nhưng bắt đầu không còn là cha của $v$ nữa. Lúc này $up[x][0]$ chính là cha chung gần nhất của $u$, $v$.

Mỗi truy vấn $lca(u,v)$ có thể xử lý trong $O(\log N)$.

## Implementation

```cpp
int n, l;
vector<vector<int>> adj;

int timer;
vector<int> tin, tout;
vector<vector<int>> up;

void dfs(int v, int p)
{
    tin[v] = ++timer;
    up[v][0] = p;
    for (int i = 1; i <= l; ++i)
        up[v][i] = up[up[v][i-1]][i-1];

    for (int u : adj[v]) {
        if (u != p)
            dfs(u, v);
    }

    tout[v] = ++timer;
}

bool is_ancestor(int u, int v)
{
    return tin[u] <= tin[v] && tout[u] >= tout[v];
}

int lca(int u, int v)
{
    if (is_ancestor(u, v))
        return u;
    if (is_ancestor(v, u))
        return v;
    for (int i = l; i >= 0; --i) {
        if (!is_ancestor(up[u][i], v))
            u = up[u][i];
    }
    return up[u][0];
}

void preprocess(int root) {
    tin.resize(n);
    tout.resize(n);
    timer = 0;
    l = ceil(log2(n));
    up.assign(n, vector<int>(l + 1));
    dfs(root, root);
}
```

