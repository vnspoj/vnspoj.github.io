---
layout: post
title:  "BESTSPOT - Vị trí tốt nhất"
categories: [dijkstra, heap]
code: BESTSPOT
src: BESTSPOT.cpp
codeforces: https://codeforces.com/group/FLVn1Sc504/contest/274766/problem/Q
---


Bessie, luôn luôn muốn cuộc sống của mình tốt hơn , đã thấy rõ rằng cô ta thật sự rất thích ghé thăm F (1 <= F <= P) cánh đồng yêu thích F\_i trong tổng số P (1 <= P <= 500;1 <= F\_i <= P) cánh đồng (được đánh số từ 1-> P) thuộc sơ hữu của nông dân John.

Bessie biết rằng cô ấy có thể xác định được C (1 <= C <= 8000) con đường hai chiều (được đánh số 1 .. C) kết nối tất cả các cánh đồng trong toàn bộ nông trại. Ứng với mỗi con đường P\_i là thời gian đi T\_i (1 <= T\_i <= 892) và nối 2 cánh đồng a\_i và b\_i (1 <= a\_i <= P; 1 <= b\_i <= P).

Bessie muốn tìm cánh đồng tốt nhất để ngủ thỏa mãn bình quân thời gian để đi đến F cánh đồng yêu thích của cô ta là nhỏ nhất.

Ví dụ, hãy xem xét một nông trang được trình bày như một bản đồ dưới đây , nơi \* 'd là cách đồng được yêu thích.Các số trong ngoặc là thời gian tương ứng để di chuyển giữa 2 cánh đồng .

```
1 \*-- \[4\] - 2 - \[2\] - 3
| |
\[3\] \[4\]
| |
4 - \[3\] - 5 - \[1\] 