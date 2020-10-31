---
layout: post
title:  "QBDIVSEQ - Chia dãy"
categories: [lis, dp]
code: QBDIVSEQ
src: QBDIVSEQ.cpp
---



  


Dãy số M phần tử B được gọi là dãy con của dãy số A gồm N phần tử nếu tồn tại một mã chuyển C gồm M phần tử thoả mãn B\[i\]=A\[C\[i\]\] với mọi I = 1…M và 1 ≤ C\[1\] < C\[2\] < ... < C\[m\] ≤ N.

Một cách chia dãy A thành các dãy con "được chấp nhận" nếu các dãy con này là các dãy không giảm và mỗi phần tử của dãy A thuộc đúng một dãy con.

Yêu cầu: Bạn hãy chia dãy con ban đầu thành ít dãy con nhất mà vẫn "được chấp nhận".

#### Input

Dòng đầu tiên ghi số N là số phần tử của dãy A. ( N ≤ 10^5 )

N dòng tiếp theo ghi N số tự nhiên là các phần tử của dãy A. ( Ai ≤ 10^9 )

#### Output

Ghi một duy nhất là số lượng dãy con ít nhất thỏa mãn.

#### Example

```
**Input:**
4
1
5
4
6

**Output:**
2


```

<!--more-->

