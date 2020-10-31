---
layout: post
title:  "BESTSPOT - Vị trí tốt nhất"
categories: [dijkstra, heap]
code: BESTSPOT
src: BESTSPOT.cpp
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
4 - \[3\] - 5 - \[1\] --- 6 --- \[6\] --- 7 - \[7\] - 8 \*
| | | |
\[3\] \[2\] \[1\] \[3\]
| | | |
13 \* 9 - \[3\] - 10 \*-- \[1\] - 11 \*-- \[3\] - 12 \*
```

Bảng sau đây cho thấy các khoảng cách trung bình nếu nghỉ tại các cánh đồng 4, 5, 6, 7, 9, 10, 11, và 12: 4 7 16 5 6 9 3 46/6 = 7.67 5 10 13 2 3 6 6 40/6 = 6.67 6 11 12 1 2 5 7 38/6 = 6.33 7 16 7 4 3 6 12 48/6 = 8.00 9 12 14 3 4 7 8 48/6 = 8.00 10 12 11 0 1 4 8 36/6 = 6.00 \*\* BEST 11 13 10 1 0 3 9 36/6 = 6.00 12 16 13 4 3 0 12 48/6 = 8.00

Kết quả tối ưu là cánh đồng 10

#### Dữ liệu

*   Dòng 1: 3 số nguyên P,F,C
*   Dòng 2..F+1: Dòng i+2 chứa 1 số Nguyên F\_i
*   Dòng F+2..C+F+1 : Mỗi dòng chứa 3 số Nguyên a\_i, b\_i, F\_i mô tả 1 con đường 2 chiều là thời gian di chuyển giữa chúng.

#### Kết quả

Gồm 1 dòng duy nhất là cánh đồng được chọn . nếu có nhiều kết quả , chọn cánh đồng có chỉ số nhỏ nhất !

#### Ví dụ

```
**Dữ liệu**
13 6 15
11
13
10
12
8
1
2 4 3
7 11 3
10 11 1
4 13 3
9 10 3
2 3 2
3 5 4
5 9 2
6 7 6
5 6 1
1 2 4
4 5 3
11 12 3
6 10 1
7 8 7

**Kết quả**
10
```

<!--more-->



Bài này cơ bản chỉ là tìm đường đi ngắn nhất từ `u` tới `v` với mọi cặp đỉnh `u`, `v`, nhưng chủ yếu bài này yêu cầu dùng dijkstra + heap để AC.
