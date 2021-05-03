---
layout: post
title:  "LINEGAME - VOI09 Trò chơi với băng số"
categories: [dp]
code: LINEGAME
src: LINEGAME.cpp
codeforces: https://codeforces.com/group/FLVn1Sc504/contest/274821/problem/K
---



  



Trò chơi với băng số là trò chơi tham gia trúng thưởng được mô tả như sau: Có một băng hình chữ nhật được chia ra làm _n_ ô vuông, đánh số từ trái qua phải bắt đầu từ 1. Trên ô vuông thứ _i_ người ta ghi một số nguyên dương _ai_, _i_ = 1, 2, ..., n. Ở một lượt chơi, người tham gia trò chơi được quyền lựa chọn một số lượng tùy ý các ô trên băng số. Giả sử theo thứ tự từ trái qua phải, người chơi lựa chọn các ô _i1_, _i2_, ..., _ik_. Khi đó điểm số mà người chơi đạt được sẽ là:

+ ai1 - ai2 + ... + (-1)^k-1aik

**Yêu cầu:** Hãy tính số điểm lớn nhất có thể đạt được từ một lượt chơi.

#### Dữ liệu:

+ Dòng đầu tiên chứa số nguyên dương n ( n ≤ 10^6 ) là số lượng ô của băng số;
+ Dòng thứ hai chứa n số nguyên dương a1, a2, ..., an ( ai ≤ 10^4, i = 1, 2, ..., n ) ghi trên băng số. Các số liên tiếp trên cùng dòng được ghi cách nhau bởi ít nhất một dấu cách.

#### Kết quả:

+ Một số nguyên duy nhất là số điểm lớn nhất có thể đạt được từ một lượt chơi.

#### Ví dụ

![](http://vn.spoj.com/content/LINEGAME.jpg)

```
Dữ liệu
7  
4 9 2 4 1 3 7

Kết quả
17
```

**Ràng buộc:** 60% số tests ứng với 60% số điểm của bài có 1 ≤ n ≤ 20.

<!--more-->

