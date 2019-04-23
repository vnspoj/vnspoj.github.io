---
layout: post
title:  "NKMAXSEQ - Dãy con dài nhất"
categories: [binary-index-tree]
code: NKMAXSEQ
src: NKMAXSEQ.cpp
---

Gọi a[i] là tổng các số từ 1 tới i. Với mỗi vị trí j thì cần tìm i nhỏ nhất (xa j nhất để dài nhất) sao cho a[j] – a[i-1] >= p


=> a[i-1] <= a[j] – p

Do đó, ta cần tìm ra chỉ số i này. Điều này thì có thể làm dễ dàng bằng BIT, với t[i] là chỉ số nhỏ nhất trong các tổng <= i. Khởi tạo t[i] = n+1với mọi i. (do n+1 lớn nhất). 

Nén số trước khi dùng. Do đó thuật có ĐPT là O(NlogN).