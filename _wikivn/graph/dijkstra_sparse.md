---
layout: wiki_vn
wiki: true
title: "Dijkstra on sparse graphs | Tìm đường đi ngắn nhất | 🇻🇳"
---

Giải thuật Dijkstra là giải thuật **tìm đường đi ngắn nhất** từ một đỉnh nguồn tới các đỉnh của một đồ thị **có hướng hoặc vô hướng**, với **trọng số các cạnh không âm**.

Xem về nội dung thuật toán và hiện thực cho độ phức tạp $O(n^2+m)$ tại bài viết [Dijkstra's algorithm](../graph/dijkstra).

## Algorithm

Như bài viết [Dijkstra's algorithm](../graph/dijkstra), độ phức tạp của giải thuật này nằm ở 2 yếu tố
+ chi phí để chọn ra đỉnh $v$ chưa đánh dấu, có khoảng cách $d[v]$ tới $s$ nhỏ nhất.
+ chi phí tối ưu hoá giá trị $d[to]$.

Thông thường đồ thị thường là **không đầy đủ** hay **thưa**, do đó số cạnh $m$ không lớn đến mức $n^2$. Do đó chi phí tìm đỉnh trong $n$ lần lặp mất $n^2$ là cost. Ta có thể tối ưu ở chỗ này.

Việc tối ưu này khá đơn giản vì ta có thể sử dụng ***heap***, hay ***hàng đợi ưu tiên*** để tìm ra trong $O(\log n)$.

Cấu trúc dữ liệu tối ưu nhất cho bài toán Dijkstra trên đồ thị thưa chính là sử dụng **Fibonacci heap**, với độ phức tạp chỉ $O(n \log n + m)$. Tuy nhiên việc hiện thực CTDL này khá phức tạp nên ta lựa chọn CTDL khác đơn giản hơn nhưng vẫn đám ứng được.

Trong C++, ta sử dụng `set` (*red-black tree*) hoặc `priority_queue` (*max heap*) thay thế. Độ phức tạp lúc này $O(n \log n + m \log n) = O(m \log n)$.

## Implementation

### `set`

```cpp
const int INF = 1000000000;
vector<vector<pair<int, int>>> adj;

void dijkstra(int s, vector<int> & d, vector<int> & p) {
    int n = adj.size();
    d.assign(n, INF);
    p.assign(n, -1);

    d[s] = 0;
    set<pair<int, int>> q;
    q.insert({0, s});
    while (!q.empty()) {
        int v = q.begin()->second;
        q.erase(q.begin());

        for (auto edge : adj[v]) {
            int to = edge.first;
            int len = edge.second;
            
            if (d[v] + len < d[to]) {
                q.erase({d[to], to});
                d[to] = d[v] + len;
                p[to] = v;
                q.insert({d[to], to});
            }
        }
    }
}
```
### `priority_queue`

```cpp
const int INF = 1000000000;
vector<vector<pair<int, int>>> adj;

void dijkstra(int s, vector<int> & d, vector<int> & p) {
    int n = adj.size();
    d.assign(n, INF);
    p.assign(n, -1);

    d[s] = 0;
    using pii = pair<int, int>;
    priority_queue<pii, vector<pii>, greater<pii>> q;
    q.push({0, s});
    while (!q.empty()) {
        int v = q.top().second;
        int d_v = q.top().first;
        q.pop();
        if (d_v != d[v])
            continue;

        for (auto edge : adj[v]) {
            int to = edge.first;
            int len = edge.second;
            
            if (d[v] + len < d[to]) {
                d[to] = d[v] + len;
                p[to] = v;
                q.push({d[to], to});
            }
        }
    }
}
```

## Practice Problems

[Xem một số bài trên vnspoj](https://vnspoj.github.io/category/dijkstra)
