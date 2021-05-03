---
layout: post
title:  "BINLADEN - Bin Laden"
categories: [dijkstra]
code: BINLADEN
src: BINLADEN.cpp
---


Trùm khủng bố Bin Laden trốn trong 1 căn hầm được đào sâu xuống mặt đất M tầng, mỗi tầng có N phòng. Các phòng được ngăn cách bằng các cửa rất khó phá. Các phòng có cửa xuống phòng ngay phía dưới và 2 phòng ở 2 bên. Từ trên mặt đất có N cửa xuống N phòng tầng -1. Bin Laden ở tầng dưới cùng (tầng -M) phòng thứ N (phòng ở bên phải nhất). Mỗi cửa được làm bằng một kim loại khác nhau với độ dày khác nhau nên việc phá cửa cần thời gian khác nhau.

Bạn hãy tìm cách đi từ mặt đất xuống phòng của Bin Laden nhanh nhất không hắn thoát mất.

#### Dữ liệu

+ Dòng 1 ghi M và N
+ Dòng 2 đến 2M + 1, dòng chẵn ghi N số, dòng lẻ ghi N - 1 số là chi phí để phá cửa.

#### Kết quả

Ghi ra 1 số là thời gian nhỏ nhất để đến được phòng của Bin Laden

#### Ví dụ

```
Input
4 2
99 10
1
10 99
1
99 10
1
10 99
1

Output
44

+--99--+--10--+
|      |      |
|      1      |
|      |      |
+--10--+--99--+
|      |      |
|      1      |
|      |      |
+--99--+--10--+
|      |      |
|      1      |
|      |      |
+--10--+--99--+
|      |      |
|      1      |
|      |      |
+------+------+

Đi theo đường zigzac
```

#### Giới hạn

+ 1 <= M <= 2222
+ 1 <= N <= 10
+ Chi phí của các cánh cửa thuộc \[0, 1000\].

<!--more-->



Xây dựng đồ thị n*m đỉnh với các cạnh là các cửa. Tìm đường đi ngắn nhất từ ô (n,m) đến các ô (0,j). Dùng dijkstra để full test
