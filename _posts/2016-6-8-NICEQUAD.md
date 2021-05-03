---
layout: post
title:  "NICEQUAD - Tứ giác đẹp"
categories: [math, brute-force]
code: NICEQUAD
src: NICEQUAD.cpp
codeforces: https://codeforces.com/group/FLVn1Sc504/contest/274512/problem/G
---



  


Có N điểm tọa độ nguyên trên mặt phẳng, một tứ giác ABCD với 4 đỉnh trong N điểm trên gọi là đẹp nếu Ax > 0 và Ay > 0; Bx > 0 và By < 0; Cx < 0 và Cy < 0; Dx < 0 và Dy > 0; ABCD có diện tích nguyên. Nhiệm vụ của bạn là đếm tất cả các cách chọn 4 đỉnh tạo nên tứ giác đẹp.

#### Dữ liệu

+ Dòng đầu tiên là số bộ test T (T < 11).
+ T nhóm dòng tiếp theo, mỗi nhóm dòng gồm số điểm N (N < 30001), sau đó là N dòng, mối dòng gồm tọa độ 1 điểm (x, y) (-3000 < x, y < 30000).

#### Kết qủa

Ghi trên T dòng, mỗi dòng là kết quả tương ứng của từng test.

#### Ví dụ

```
Dữ liệu
1
6
1 1
2 2
-1 -1
-2 2
2 -1
-3 -4

Kết qủa
2 
```

<!--more-->

