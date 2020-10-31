---
layout: post
title:  "CHESSCBG - "
categories: []
code: CHESSCBG
src: CHESSCBG.cpp
---



Một bàn cờ thế là một bảng gồm 4 dòng, 4 cột. Mỗi thế cờ là một cách sắp xếp 8 quân cờ, hai quân khác nhau ở hai ô khác nhau. Bài toán đặt ra là cho hai thế cờ 1 và 2, hãy tìm một số ít nhất bước di chuyển quân để chuyển từ thế 1 sang thế 2; một bước di chuyển quân là một lần chuyển quân cờ sang ô trống kề cạnh với ô quân cờ đang đứng.

#### Dữ liệu vào

Từ file văn bản gồm 8 dòng, mỗi dòng là một xâu nhị phân độ dài 4 mà số 1/0 tương ứng với vị trí có hoặc không có quân cờ. Bốn dòng đầu là thế cờ 1, bốn dòng sau là thế cờ 2.

#### Dữ liệu ra

Gồm 1 dòng duy nhất là số bước chuyển quân ít nhất

#### Ví dụ

```
**Dữ liệu vào:**
1111
0000
1110
0010
1010
0101
1010
0101

**Dữ liệu ra :**
4

```

<!--more-->

