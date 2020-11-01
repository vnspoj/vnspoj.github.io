---
layout: post
title:  "ORDERSET - Order statistic set"
categories: [data-structure, set]
code: ORDERSET
src: ORDERSET.cpp
codeforces: https://codeforces.com/group/FLVn1Sc504/contest/274512/problem/X
---



  






#### Tập hợp thứ tự

Bạn cần quản lý một tập hợp động các số, hỗ trợ hai thao tác cơ bản:

*   INSERT(S,x): nếu x không thuộc S, thêm x vào S
*   DELETE(S,x): nếu x thuộc S, xóa x khỏi S

và hai loại truy vấn

*   K-TH(S) : trả về số bé thứ k của S
*   COUNT(S,x): đếm số lượng số thuộc S bé hơn x

#### Dữ liệu

*   Dòng 1: Q (1 ≤ Q ≤ 200000), số thao tác
*   Q dòng sau, đầu mỗi dòng chứa ký tự I, D, K hoặc C cho biết thao tác tương ứng là INSERT, DELETE, K-TH hay COUNT. Tiếp theo là một khoảng trắng và một số nguyên là tham số cho thao tác đó.

Nếu tham số là giá trị x, dữ liệu bảo đảm 0 ≤ |x| ≤ 10^9. Nếu tham số là chỉ số k, dữ liệu bảo đảm 1 ≤ k ≤ 10^9.

#### Kết quả

Với mỗi truy vấn, in ra kết quả tương ứng trên một dòng. Với truy vấn K-TH, nếu k lớn hơn số phần tử của S, in ra 'invalid'.

#### Ví dụ

```
**Dữ liệu**
8
I -1
I -1
I 2
C 0
K 2
D -1
K 1
K 2

**Kết quả**
1
2
2
invalid

```

<!--more-->

