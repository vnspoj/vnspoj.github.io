---
layout: post
title:  "TREEPATH - Đường đi trên cây"
categories: [bignum, dp, tree]
level: medium
code: TREEPATH
src: TREEPATH.cpp
codeforces: https://codeforces.com/group/FLVn1Sc504/contest/274834/problem/Z
---

Cho **một cây tam phân đầy đủ**, mỗi nút có đúng 3 nút con: nút con trái, nút con giữa và nút con phải. Mỗi nút ghi một số nguyên theo quy tắc sau:

+ Nút gốc ghi số `1`.
+ Nếu một nút ghi số `X` thì nút con trái của nó ghi số `3X`, nút giữa ghi số `3X+1`, nút phải ghi số `3X+2`.

![](https://vn.spoj.com/content/treepath.jpg)

Để di chuyển trên cây từ một nút người ta dùng một trong 4 lệnh sau:

+ `L`: Di chuyển đến nút con trái,
+ `C`: Di chuyển đến nút con giữa,
+ `R`: Di chuyển đến nút con phải,
+ `S`: Đứng nguyên tại nút hiện thời.

Một khuôn mẫu đường đi từ nút gốc là một xâu gồm các ký tự : `L`, `C`, `R`, `S` và `*` trong đó dấu `*` có thể được thay thế bởi 1 trong 4 ký tự: `L`, `C`, `R` và `S`.

Với một cách thay thế dấu `*` ta nhận được một đường đi từ nút gốc tới một nút lá nào đó và tổng các số ghi trên các nút đi qua gọi là trọng số của đường đi đó.

#### Yêu cầu

Cho một khuôn mẫu đường đi, hãy tính **tổng** `T` trọng số các đường đi phù hợp với khuôn mẫu.

#### Dữ liệu

Chứa một xâu không quá **2,000** ký tự `L`, `C`, `R`, `S` và `*`.

#### Kết quả

Ghi ra file văn bản số `T` tìm được.

#### Ví dụ

```
Input
*LS		

Output
55
```

Nguồn: 5-й этап Республиканской олимпиады по информатике, 10-11 класс Республика Казахстан, Апрель, 2009

<!--more-->

Bài này ý tưởng hoàn toàn tương tự bài [SETNJA](https://vnspoj.github.io/problems/SETNJA), nhưng có một chỗ khác chính là trọng số một đường đi là tổng các số trên các nút đã đi qua trên con đường. Cụ thể như sau:

<img src="/static/img/posts/TREEPATH.png">

Vẫn như trước gọi `F[i]` là tổng các số của các nút là khi đến kí tự thứ `i`. Và gọi thêm `S` là tổng cần tìm, `n` là số nhánh phân ra hiện tại. trong hình vẽ trên nút 1 được tính 16 lần do sau cùng có tất cả `4*4` nhánh, tương ứng `4*4` con đường (cũng là 2 kí tự `*`). Còn các số 3, 4, 5 (vị trí thứ 2) thì mỗi số được tính 4 lần, do sau mỗi số có 4 nhánh (tương ứng 1 kí tự *), số 1 không được tính vì nó là trạng thái S, đứng yên và trước đó đã tính nó rồi. Còn các số 5, 14, 17 (vị trí thứ 3) cũng tính 4 lần. Còn các số vị trí thứ 4 (không có số trên hình) thì chúng được tính 1 lần vì sau nó không có * (chỉ có một nhánh). 

Từ những nhận xét trên, ta gọi `f[i]` là số kí tự `*` từ `i` đến `l` với `l` là vị trí cuối xâu. Dễ tính `f[i]`. Gọi `p4[i]` là `4^i`, cũng dễ dàng tính được. Đến đây bài toán hoàn toàn đơn giản, dễ dàng suy ra công thức tính `F[]`
