---
layout: post
title:  "AUCTION - Going Once, Going Twice, Gone!"
categories: [dp]
code: AUCTION
src: AUCTION.cpp
---


Chế độ ăn kiêng của đàn bò khiến cho nông trang của nông dân John dôi ra 1 số lượng cỏ khô, vì vậy anh ta muốn bán đấu giá số cỏ khô này để trang trải phần nào chi phí chăn nuôi. Anh ta có N (1 <= N <= 1,000) bó cỏ khô giống nhau; khách hàng sẽ đấu giá để mua đống cỏ này là M (1 <= M <= 1,000) nông dân khác sống gần đó.

Mỗi một nông dân i sẽ cho nông dân John biết anh ta sẵn sàng trả P\_i (1 <= P\_i <= 1,000,000) đồng cho 1 bó cỏ khô. Mỗi một nông dân chỉ muốn mua 1 bó cỏ khô mà thôi.

Để đảm bảo các nông dân không ghen tị với nhau, nông dân John sẽ đưa ra 1 mức giá cố định cho tất cả người đến mua và bán các bó cỏ khô cho những ai trả giá >= mức giá đó, những người còn lại sẽ bị từ chối giao dịch.

Hãy giúp nông dân John tính xem đặt mức giá nhỏ nhất là bao nhiêu để thu được nhiều tiền nhất có thể.

#### Dữ liệu

\* Dòng 1: Hai số nguyên cách nhau bởi dấu cách: N và M

\* Dòng 2..M+1: Dòng i+1 chứa 1 số nguyên duy nhất: P\_i

#### Kết quả

\* Dòng 1: 2 số nguyên cách nhau bởi dấu cách: giá bán của John và số tiền mà John thu được

#### Ví dụ

```
Dữ liệu:
5 4
2
8
10
7

Kết quả:
7 21
```

<!--more-->


