---
layout: post
title:  "LUBENICA - Lubenica"
categories: [lca, dp, tree, graph]
code: LUBENICA
src: LUBENICA.cpp
codeforces: https://codeforces.com/group/FLVn1Sc504/contest/274821/problem/Y
---



  






Mạng lưới giao thông ở 1 nước bao gồm N thành phố (đánh số từ 1 đến N) và N-1 đường nối các thành phố với nhau. Có một đường đi duy nhất giữa mỗi cặp thành phố. Mỗi con đường có một độ dài xác định.

Viết chương trình, với mỗi K cặp thành phố cho trước, tìm độ dài của con đường ngắn nhất và dài nhất trên đường đi giữa 2 thành phố này.

#### Dữ liệu

Dòng đầu tiên chứa số nguyên N, 2 ≤ N ≤ 100 000.

Mỗi dòng trong số N-1 dòng tiếp theo chứa 3 số nguyên A, B, C cho biết có một con đường độ dài C giữa thành phố A và thành phố B. Độ dài của mỗi con đường là số nguyên dương không vượt quá 1000000.

Dòng tiếp theo chứa số nguyên K, 1 ≤ K ≤ 100 000.

Mỗi dòng trong số K dòng tiếp theo chứa 2 số nguyên D và E - chỉ số của 2 thành phố cần truy vấn.

#### Kết qủa

Mỗi dòng trong số K dòng chứa 2 số nguyên - độ dài của con đường ngắn nhất và dài nhất trên đường nối giữa 2 thành phố tương ứng.

#### Ví dụ

```
**Dữ liệu:**
5
2 3 100
4 3 200
1 5 150
1 3 50
3
2 4
3 5
1 2
**Kết qủa**
100 200
50 150
50 100

**Dữ liệu:**
7
3 6 4
1 7 1
1 3 2
1 2 6
2 5 4
2 4 4
5
6 4
7 6
1 2
1 3
3 5

**Kết qủa**
2 6
1 4
6 6
2 2
2 6

**Dữ liệu:**
9
1 2 2
2 3 1
3 4 5
2 7 4
1 5 3
5 6 1
5 9 2
1 8 3
5
6 9
7 8
9 4
1 2
7 3

**Kết qủa**
1 2
2 4
1 5
2 2
1 4

```

<!--more-->

