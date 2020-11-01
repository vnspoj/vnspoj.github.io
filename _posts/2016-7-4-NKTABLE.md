---
layout: post
title:  "NKTABLE - NKTable"
categories: [bfs]
code: NKTABLE
src: NKTABLE.cpp
codeforces: https://codeforces.com/group/FLVn1Sc504/contest/274512/problem/P
---



  


Cho bảng m \* n ô, mỗi ô có 1 trong 3 số: 0, 1, 2:

\-   0, 1 : ô được phép đi vào.

\-   2 : ô cấm, không được đi vào.

**Yêu cầu:** 

\- Xuất phát từ ô (1, 1), chỉ dùng các phép di chuyển **sang phải hoặc xuống dưới** ô kề cạnh, hãy di chuyển đến ô (m; n) sao cho dãy nhị phân tạo thành từ các ô trên đường đi là số **lớn nhất** có thể (trong hệ thập phân).

\- Dữ liệu đảm bảo luôn tìm được đường đi.

**Giới hạn:**

\-   2 <= m, n <= 500

  
Input 

\- Dòng đầu tiên gồm 2 số m, n.

\- m dòng tiếp theo, mỗi dòng gồm n số thuộc tập {0, 1, 2}. Số thứ j ở dòng i biểu diễn ô (i, j) trên bảng.

\- Các số cùng dòng trong input cách nhau một hoặc nhiều dấu cách.

Output

\-   Một dòng duy nhất là chuỗi nhị phân có giá trị số ở hệ thập phân lớn nhất tìm được (các số in liền).

**Ví dụ:** 

Input :

3 5

0 1 2 0 2

0 1 0 0 1

1 2 1 2 1

Output :

0110011

<!--more-->

