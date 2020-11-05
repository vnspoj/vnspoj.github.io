---
layout: post
title:  "PWRFAIL - Mất điện"
categories: [dijkstra, graph]
code: PWRFAIL
src: PWRFAIL.cpp
codeforces: https://codeforces.com/group/FLVn1Sc504/contest/274829/problem/M
---



  


Một cơn bão đã phá hủy 1 số đường dây điện của nông trang! Nông dân John có một bản đồ tất cả N (2 <= N <= 1,000) cây cột điện, để thuận tiện ta đánh số các cột này từ 1->N, mỗi cột này được xác định trên mặt phẳng bởi 2 số nguyên x\_i, y\_i (-100,000 <= x\_i <= 100000; -100,000 <= y\_i <= 100,000).

Hiện đang có W (1 <= W <= 10,000) đường dây điện nối các cặp cột điện Pi và Pj (1 <= Pi <= N; 1 <= Pj <= N). John cần mang điện từ cột 1 tới cột N (thông qua các đường dây điện và các cột điện khác).

Cho tọa độ của N cột điện và danh sách những đường dây điện vẫn còn hoạt động. Hãy xác định độ dài nhỏ nhất của các đường dây điện cần thêm để sao cho điện từ cột 1 có thể truyền tới cột N. Biết rằng độ dài tối đa của 1 đường dây điện là 1 số thực M (0.0 < M <= 200,000.0).

Ví dụ, dưới đây là bên trái là bản đồ 9 cột điện và 3 dây nối vẫn còn hoạt động sau cơn bão. Trong ví dụ này, M = 2.0. Cách tốt nhất là ta thêm 2 đường dây điện nối 4-6 và 6-9.

```
      Sau cơn bão                   Phương án tối ưu

3  . . . 7 9 . . . . .          3  . . . 7 9 . . . . .
                                          /
2  . . 5 6 . . . . . .          2  . . 5 6 . . . . . .
                                        /
1  2-3-4 . 8 . . . . .          1  2-3-4 . 8 . . . . .
   |                               |
0  1 . . . . . . . . .          0  1 . . . . . . . . .

   0 1 2 3 4 5 6 7 8 9             0 1 2 3 4 5 6 7 8 9

```

Tổng độ dài là 1.414213562 + 1.414213562 = 2.828427124 .

#### DỮ LIỆU

*   Dòng 1: Hai số nguyên cách nhau bởi dấu cách: N và W
*   Dòng 2: Một số thực: M
*   Dòng 3..N+2: Mỗi dòng gồm 2 số nguyên cách nhau bởi dấu cách: x\_i và y\_i
*   Dòng N+3..N+2+W: 2 số nguyên cách nhau bởi dấu cách: Pi và Pj

#### KẾT QUẢ

*   Dòng 1: Một số nguyên trên 1 dòng. Nếu không có phương án để cấp điện cho cột N từ cột 1 thì ghi ra -1. Ngược lại, ghi ra 1 số nguyên là tổng độ dài nhỏ nhất nhân với 1000.
*   Chú ý không làm tròn, làm giảm tích thu được ở trên.

#### VÍ DỤ

```
Input
9 3
2.0
0 0
0 1
1 1
2 1
2 2
3 2
3 3
4 1
4 3
1 2
2 3
3 4

Output
2828

```

#### GIẢI THÍCH

Như hình bên trên.

<!--more-->

