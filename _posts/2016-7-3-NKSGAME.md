---
layout: post
title:  "NKSGAME - VOI08 Trò chơi với dãy số"
categories: [binary-search]
code: NKSGAME
src: NKSGAME.cpp
---

Cần tìm hai chỉ số i, j từ 2 mảng a[] và b[] sao cho |a[i]+b[j]| min. N <= 1e5, do đó ta có thể sắp xếp mảng a[], sau đó duyệt từng phần tử j của mảng b[], chặt nhị phân trên mảng a[] đã được sort để tìm phần tử i gần với giá trị -b[j] nhất.

Có thể sử dụng hàm lower_bound() trong C++. 