---
layout: post
title:  "QBSCHOOL - Đến trường"
categories: [dijkstra, dp]
code: QBSCHOOL
src: QBSCHOOL.cpp
---

Nhận xét trước hết hai loại đường không ảnh hưởng đến bài toán (đường đi hai chiều chỉ là hai đường đi 1 chiều). Dùng dijkstra kết hợp với QHĐ trong lúc co d[], gọi F[v] là số đường đi ngắn nhất đến được v, khi xét d[v] với d[u] + c[u][v], nếu d[v] = d[u] + c[u][v] thì F[v] += F[u] trái lại F[v] = F[u].
