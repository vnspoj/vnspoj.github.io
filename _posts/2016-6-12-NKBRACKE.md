---
layout: post
title:  "NKBRACKE - Dãy ngoặc đúng"
categories: [segment-tree, data-structure]
code: NKBRACKE
src: NKBRACKE.cpp
---

Bài này sử dụng segment tree, với mỗi node lưu số lượng dấu ngoặc mở sai và dấu ngoặc đóng sai, tức các dấu chưa có cặp đi chung để triệt tiêu trong đoạn. Ví dụ chuỗi ngoặc `)(()))()((()()((` sẽ được thu gọn thành `))((((`, khi đó số ngoặc mở `(` sai là 4 và số `)` sai là 2. Ta chỉ cần những thông số này.

Khi merge hay combine 2 node con, ta có công thức sau:

```bash
# l, r là 2 node con
# lose là số lượng cặp ngoặc có thể triệt tiêu 
loss     = min(l.open, r.close)

open     = l.open - loss + r.open;
close    = r.close - loss + l.close;
```

Lấy ví dụ: các node con (sau khi đã loại bỏ các cặp triệt tiêu), ta có con trái là `))(((` và con phải là `))((` thì số cặp được triệt tiêu là 2 (vì có 3 mở bên trái và 2 mở bên phải).
