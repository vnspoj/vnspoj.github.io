---
layout: post
title:  "TRAFFICN - Traffic Network"
categories: [dijkstra, graph]
code: TRAFFICN
src: TRAFFICN.cpp
---

Mạng lưới giao thông thành phố gồm n nút được đánh số từ 1 đến n và m đường một chiều nối các cặp nút. Để giảm được độ dài của đường đi ngắn nhất giữa hai nút trọng yếu s và t khác nhau, một danh sách gồm k đường hai chiều được đề xuất để xem xét xây dựng.

Nhiệm vụ của bạn là viết một chương trình để chọn ra một đường trong danh sách đề xuất trên để xây dựng sao cho độ dài đường đi ngắn nhất giữa s và t là nhỏ nhất.

#### Dữ liệu vào

Dữ liệu vào gồm nhiều bộ dữ liệu tương ứng với nhiều test. Dòng đầu tiên chứa một số nguyên dương không lớn hơn 20 là số lượng các bộ dữ liệu. Các dòng tiếp theo chứa các bộ dữ liệu.

Với mỗi bộ dữ liệu, dòng đầu tiên chứa năm số nguyên dương n (n ≤ 10 000), m (m ≤ 100 000), k (k < 300), s (1 ≤ s ≤ n), t (1 ≤ t ≤ n) cách nhau bởi dấu trống. Dòng thứ i trong m dòng tiếp theo chứa ba số nguyên dương di, ci, li cách nhau bởi dấu trống, trong đó li là độ dài ( 0< li ≤ 1000) của đường một chiều thứ i từ nút di đến nút ci. Dòng thứ j trong k dòng tiếp theo chứa ba số nguyên dương uj, vj và qj (qj ≤ 1000) cách nhau bởi dấu trống, trong đó qj là độ dài của đường hai chiều được đề xuất thứ j nối giữa hai nút uj và vj.

#### Dữ liệu ra

Với mỗi bộ dữ liệu, ghi ra trên một dòng độ dài nhỏ nhất có thể của đường đi ngắn nhất giữa hai nút trọng yếu sau khi xây dựng xong một đường hai chiều từ danh sách đề xuất. Trường hợp không có đường đi từ s đến t, ghi -1.

```
**Dữ liệu vào**
1
4 5 3 1 4
1 2 13
2 3 19
3 1 25
3 4 17
4 1 18
1 3 23
2 3 5
2 4 25	

**Dữ liệu ra**
35

```

<!--more-->

