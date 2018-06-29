---
layout: post
title:  "QBSCHOOL - Đến trường"
categories: [dijkstra, dp, graph, heap]
code: QBSCHOOL
src: QBSCHOOL.cpp
---

Bài toán yêu cầu tìm đường đi ngắn nhất từ đỉnh `1` đến đỉnh `N`, ngoài ra còn yêu cầu tính số lượng đường đi ngắn nhất nói trên.

Nhận xét trước hết hai loại đường không ảnh hưởng đến bài toán (đường đi hai chiều chỉ là hai đường đi 1 chiều). Dùng dijkstra kết hợp với quy hoạch động (QHĐ), cụ thể trong lúc co giá trị `d[]`, gọi `F[v]` là số đường đi ngắn nhất đến được `v`, tại bước so sánh giá trị `d[v]` với `d[u] + c[u][v]` (lúc lấy đỉnh `u` ra khỏi heap, và update đỉnh `v`), nếu `d[v] = d[u] + c[u][v]` thì có đường đi khác đến `v`, tức `F[v] += F[u]` trái lại nếu `d[v] > d[u] + c[u][v]`, tức có đường ngắn hơn đến `v`, gán `F[v] = F[u]`.
