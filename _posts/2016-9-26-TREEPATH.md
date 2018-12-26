---
layout: post
title:  "TREEPATH - Đường đi trên cây"
categories: [bignum, dp, tree]
code: TREEPATH
src: TREEPATH.cpp
---

Bài này ý tưởng hoàn toàn tương tự bài SETNJA, nhưng có một chỗ khác chính là trọng số một đường đi là tổng các số trên các nút đã đi qua trên con đường. Cụ thể như sau:

<img src="/static/img/posts/TREEPATH.png">

Vẫn như trước gọi F[i] là tổng các số của các nút là khi đến kí tự thứ i. Và gọi thêm S là tổng cần tìm, n là số nhánh phân ra hiện tại. trong hình vẽ trên nút 1 được tính 16 lần do sau cùng có tất cả 4*4 nhánh, tương ứng 4*4 con đường (cũng là 2 kí tự *). Còn các số 3, 4, 5 (vị trí thứ 2) thì mỗi số được tính 4 lần, do sau mỗi số có 4 nhánh (tương ứng 1 kí tự *), số 1 không được tính vì nó là trạng thái S, đứng yên và trước đó đã tính nó rồi. Còn các số 5, 14, 17 (vị trí thứ 3) cũng tính 4 lần. Còn các số vị trí thứ 4 (không có số trên hình) thì chúng được tính 1 lần vì sau nó không có * (chỉ có một nhánh). 

Từ những nhận xét trên, ta gọi f[i] là số kí tự * từ i đến l với l là vị trí cuối xâu. Dễ tính f[i]. Gọi p4[i] là 4^i, cũng dễ dàng tính được. Đến đây bài toán hoàn toàn đơn giản, phần công thức tính F[] mình nghĩ mấy bạn đủ khả năng để giải.
