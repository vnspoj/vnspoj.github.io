---
layout: post
title:  "NKLINEUP - Xếp hàng"
categories: [segment-tree, rmq, data-structure]
code: NKLINEUP
src: NKLINEUP.cpp
---

Bài này sử dụng segment tree, với data trên mỗi node gồm giá trị max và min trong đoạn mà node quản lý. Mỗi truy vấn, tìm ra giá trị max và min trong đoạn `[L,R]` của truy vấn đó.

Độ phức tạp: `O(NlogN + QlogN)`

Bài này cũng có thể dùng giải thuật RMQ để xử lý giá trị max, min trong đoạn, trả lời mỗi truy vấn trong `O(1)`.
