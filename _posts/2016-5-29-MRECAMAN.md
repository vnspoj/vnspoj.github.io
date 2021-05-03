---
layout: post
title:  "MRECAMAN - Recaman’s Sequence"
categories: [set, data-structure]
code: MRECAMAN
src: MRECAMAN.cpp
codeforces: https://codeforces.com/group/FLVn1Sc504/contest/274710/problem/Y
---



  







Dãy Recaman được định nghĩa như sau : a0 = 0 ; với m > 0, a(m) = a(m−1) − m nếu a(m) là dương và chưa xuất hiện trong dãy, ngược lại a(m) = a(m−1) + m. Một số phần tử đầu tiên của dãy là 0, 1, 3, 6, 2, 7, 13, 20, 12, 21, 11, 22,10, 23, 9 · · · .

Cho k, tính ak.

#### Input

Gồm vài test case, mỗi dòng chứa một số nguyên k. (0<=k<=500000). Kết thúc là số -1.

```
Sample Input  
7  
10000  
-1  
```

#### Output

In ra ak trên 1 dòng.  
  
```
Sample output  
20  
18658  
```

<!--more-->

