---
layout: post
title:  "QBBUILD - Xây dựng đường"
categories: [dijkstra, graph]
code: QBBUILD
src: QBBUILD.cpp
---

Trước hết tính khoảng cách ngắn nhất từ u tới v với mọi u,v. 

Gọi `f[i]` là các đỉnh quan trọng, mảng `imp[u]` kiểm tra `u` có quan trọng không.

Nhận xét đầu tiên cho bài toán chính là kết quả cách nối là một cây (vì là nhỏ nhất nên không thể có chu trình). Ngoài ra trong tất cả các cách nối đường thì luôn tồn tại một đường đi là đường đi ngắn nhất giữa hai đỉnh `f[i]` và `f[j]` (`i != j`).

Từ nhận xét này, thử với mỗi cặp đỉnh `i`, `j` trong các đỉnh quan trọng, khởi tạo bằng đường đi ngắn nhất giữa 2 đỉnh này. Với đường đi này (1 cây), lần lượt nạp các đỉnh còn lại trong `f` vào cây tạo thành cây khung nhỏ nhất chứa các đỉnh `f`.
