---
layout: post
title:  "NKMAXSEQ - Dãy con dài nhất"
categories: [binary-index-tree]
code: NKMAXSEQ
src: NKMAXSEQ.cpp
codeforces: https://codeforces.com/group/FLVn1Sc504/contest/274824/problem/Q
---



  



Cho dãy số nguyên a1, a2, …, an.

Dãy số ai, ai+1, …, aj với 1 ≤ i ≤ j ≤ n được gọi là dãy con của dãy số đã cho và khi đó, j-i+1 được gọi là độ dài, còn ai+ai+1...+aj được gọi là trọng lượng của dãy con này.

Yêu cầu: cho số nguyên p, trong số các dãy con của dãy số đã cho có trọng lượng không nhỏ hơn p hãy tìm dãy con có độ dài lớn nhất.

#### Dữ liệu vào

*   Dòng đầu tiên ghi hai số nguyên n và p cách nhau bởi dấu cách.
*   Dòng thứ i trong số n dòng tiếp theo chứa số nguyên ai là số hạng thứ i của dãy số đã cho, i = 1, 2, …, n.

#### Kết qủa

Ghi ra số nguyên k là độ dài của dãy con tìm được (qui ước: nếu không có dãy con nào thỏa mãn điều kiện đặt ra thì k = -1).

#### Hạn chế

Trong tất cả các test: 1 ≤ n ≤ 50000; |ai| ≤ 20000; |p| ≤ 10^9. Có 50% số lượng test với n ≤ 2000.

#### Ví dụ

```
**Dữ liệu mẫu**
5 6
-2
3
2
-2
3

**Kết qủa**
4

**Dữ liệu mẫu**
4 9
2
3
2
-2

**Kết qủa**
-1

```

<!--more-->



Gọi a[i] là tổng các số từ 1 tới i. Với mỗi vị trí j thì cần tìm i nhỏ nhất (xa j nhất để dài nhất) sao cho a[j] – a[i-1] >= p


=> a[i-1] <= a[j] – p

Do đó, ta cần tìm ra chỉ số i này. Điều này thì có thể làm dễ dàng bằng BIT, với t[i] là chỉ số nhỏ nhất trong các tổng <= i. Khởi tạo t[i] = n+1với mọi i. (do n+1 lớn nhất). 

Nén số trước khi dùng. Do đó thuật có ĐPT là O(NlogN).
