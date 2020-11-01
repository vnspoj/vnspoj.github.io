---
layout: post
title:  "NKBRACKE - Dãy ngoặc đúng"
categories: [segment-tree, data-structure]
code: NKBRACKE
src: NKBRACKE.cpp
codeforces: https://codeforces.com/group/FLVn1Sc504/contest/274512/problem/L
---



  


```
  
Cho một xâu độ dài N chỉ gồm các kí tự ‘(‘ và ‘)’, các kí tự được đánh số từ 1 đến N theo chiều từ trái qua phải.

Một dãy ngoặc đúng được định nghĩa như sau:

\-     Xâu rỗng là 1 dãy ngoặc đúng.

\-     Nếu A là 1 dãy ngoặc đúng thì (A) là 1 dãy ngoặc đúng.

\-     Nếu A và B là 2 dãy ngoặc đúng thì AB là 1 dãy ngoặc đúng.

Cho M truy vấn, mỗi truy vấn thuộc 1 trong 2 loại sau:

\-     0 i ch: thay đổi kí tự ở vị trí i của xâu kí tự thành kí tự ch.

\-    1 i j: in ra 1 nếu xâu con từ vị trí i đến vị trí j là một dãy ngoặc đúng, in ra 0 trong trường hợp ngược lại.

**Giới hạn:**

      2 <= N <= 100000

      1 <= M <= 200000

      Trong truy vấn loại 1:    1 <= i <= N;              ch là ‘(‘ hoặc ‘)’

      Trong truy vấn loại 2:    1 <= i <= j <= N;

Input

\-     Dòng đầu tiên chứa 2 số N, M

\-     Dòng tiếp theo chứa N kí tự liên tiếp.

\-     M dòng tiếp theo, mỗi dòng chứa 1 truy vấn thuộc 1 trong 2 loại trên.

Output

\-     In ra 0 hoặc 1 tương ứng với mỗi truy vấn loại 2.

**Ví dụ:**

Input

Output

8 7

()))(())

1 1 2

1 3 4

0 3 (

1 1 4

1 5 8

0 6 )

1 5 8

10110 
```

<!--more-->



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
