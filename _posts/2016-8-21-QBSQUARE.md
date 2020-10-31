---
layout: post
title:  "QBSQUARE - Hình vuông 0 1"
categories: [dp]
code: QBSQUARE
src: QBSQUARE.cpp
---



  


Cho một bảng kích thước MxN, được chia thành lưới ô vuông đơn vị M dòng N cột ( 1 <= M, N <= 1000 )

Trên các ô của bảng ghi số 0 hoặc 1. Các dòng của bảng được đánh số 1, 2... M theo thứ tự từ trên xuống dưới và các cột của bảng được đánh số 1, 2..., N theo thứ tự từ trái qua phải

Yêu cầu:

Hãy tìm một hình vuông gồm các ô của bảng thoả mãn các điều kiện sau:

1 - Hình vuông là đồng nhất: tức là các ô thuộc hình vuông đó phải ghi các số giống nhau (0 hoặc 1)

2 - Cạnh hình vuông song song với cạnh bảng.

3 - Kích thước hình vuông là lớn nhất có thể

#### Input

Dòng 1: Ghi hai số m, n

M dòng tiếp theo, dòng thứ i ghi N số mà số thứ j là số ghi trên ô (i, j) của bảng

#### Output

Gồm 1 dòng duy nhất ghi kích thước cạnh của hình vuông tìm được

#### Example

```
Input
11 13
0 0 0 0 0 1 0 0 0 0 0 0 0
0 0 0 0 1 1 1 0 0 0 0 0 0
0 0 1 1 1 1 1 1 1 0 0 0 0
0 0 1 1 1 1 1 1 1 0 0 0 0
0 1 1 1 1 1 1 1 1 1 0 0 0
1 1 1 1 1 1 1 1 1 1 1 0 0
0 1 1 1 1 1 1 1 1 1 0 0 0
0 0 1 1 1 1 1 1 1 0 0 0 0
0 0 1 1 1 1 1 1 1 0 0 0 0
0 0 0 0 1 1 1 0 0 0 0 1 1
0 0 0 0 0 1 0 0 0 0 0 1 1

Output
7

```

<!--more-->

