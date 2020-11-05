---
layout: post
title:  "QBSCHOOL - Đến trường"
categories: [dijkstra, dp, graph, heap]
code: QBSCHOOL
src: QBSCHOOL.cpp
codeforces: https://codeforces.com/group/FLVn1Sc504/contest/274518/problem/W
---



  


Ngày 27/11 tới là ngày tổ chức thi học kỳ I ở trường ĐH BK. Là sinh viên năm thứ nhất, Hiếu không muốn vì đi muộn mà gặp trục trặc ở phòng thi nên đã chuẩn bị khá kỹ càng. Chỉ còn lại một công việc khá gay go là Hiếu không biết đi đường nào tới trường là nhanh nhất.

Thường ngày Hiếu không quan tâm tới vấn đề này lắm cho nên bây giờ Hiếu không biết phải làm sao cả . Bản đồ thành phố là gồm có N nút giao thông và M con đường nối các nút giao thông này. Có 2 loại con đường là đường 1 chiều và đường 2 chiều. Độ dài của mỗi con đường là một số nguyên dương.

Nhà Hiếu ở nút giao thông 1 còn trường ĐH BK ở nút giao thông N. Vì một lộ trình đường đi từ nhà Hiếu tới trường có thể gặp nhiều yếu tố khác như là gặp nhiều đèn đỏ , đi qua công trường xây dựng, ... phải giảm tốc độ cho nên Hiếu muốn biết là có tất cả bao nhiêu lộ trình ngắn nhất đi từ nhà tới trường. Bạn hãy lập trình giúp Hiếu giải quyết bài toán khó này.

#### Input

Dòng thứ nhất ghi hai số nguyên N và M.

M dòng tiếp theo, mỗi dòng ghi 4 số nguyên dương K, U, V, L. Trong đó:

K = 1 có nghĩa là có đường đi một chiều từ U đến V với độ dài L.

K = 2 có nghìa là có đường đi hai chiều giữa U và V với độ dài L.

#### Output

Ghi hai số là độ dài đường đi ngắn nhấn và số lượng đường đi ngắn nhất. Biết rằng số lượng đường đi ngắn nhất không vượt quá phạm vì int64 trong pascal hay long long trong C++.

#### Example

```
Input
3 2
1 1 2 3
2 2 3 1

Output
4 1
```

**Giới hạn**

+ 1 ≤ N ≤ 5000
+ 1 ≤ M ≤ 20000
+ Độ dài các con đường ≤ 32000

<!--more-->



Bài toán yêu cầu tìm đường đi ngắn nhất từ đỉnh `1` đến đỉnh `N`, ngoài ra còn yêu cầu tính số lượng đường đi ngắn nhất nói trên.

Nhận xét trước hết hai loại đường không ảnh hưởng đến bài toán (đường đi hai chiều chỉ là hai đường đi 1 chiều). Dùng dijkstra kết hợp với quy hoạch động (QHĐ), cụ thể trong lúc co giá trị `d[]`, gọi `F[v]` là số đường đi ngắn nhất đến được `v`, tại bước so sánh giá trị `d[v]` với `d[u] + c[u][v]` (lúc lấy đỉnh `u` ra khỏi heap, và update đỉnh `v`), nếu `d[v] = d[u] + c[u][v]` thì có đường đi khác đến `v`, tức `F[v] += F[u]` trái lại nếu `d[v] > d[u] + c[u][v]`, tức có đường ngắn hơn đến `v`, gán `F[v] = F[u]`.
