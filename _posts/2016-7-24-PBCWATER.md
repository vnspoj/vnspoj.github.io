---
layout: post
title:  "PBCWATER - Tính toán lượng nước"
categories: [heap, dp, data-structure, dijkstra]
code: PBCWATER
src: PBCWATER.cpp
---

Gọi `F[i][j]` là mực nước mà ô `(i,j)` đạt đến, khi đó kết quả bài toán là `F[i][j] – a[i][j]`. Xét mọi đường đi từ biên đến ô `(i,j)`, hay nói các khác nước chảy từ ô `(i,j)` ra biên, khi đó ta xét mọi ô max trên mọi đường đi này, thì `F[i][j]` là min trong các ô đó, điều này không phải là dễ để chứng minh được, nhưng ta có thể dựa vào hình vẽ để nhận ra điều đó. Do đó, lợi dụng tư tưởng thuật toán dijkstra, ta xây dựng đồ thị `N*M` đỉnh và tìm `F[i][j]`.
