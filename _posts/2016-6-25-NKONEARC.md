---
layout: post
title:  "NKONEARC - Mạng máy tính"
categories: [tarjan]
code: NKONEARC
src: NKONEARC.cpp
codeforces: https://codeforces.com/group/FLVn1Sc504/contest/274824/problem/Y
---



  



Một hệ thống n máy tính (các máy tính được đánh số từ 1 đến n) được nối lại thành một mạng bởi m kênh nối, mỗi kênh nối hai máy nào đó và cho phép ta truyền tin một chiều từ máy này đến máy kia. Giả sử s và t là 2 máy tính trong mạng. Ta gọi đường truyền từ máy s đến máy t là một dãy các máy tính và các kênh nối chúng có dạng:

s = u1, e1, u2, ..., ui, ei, ui+1, ..., uk-1, ek-1, uk = t

trong đó u1, u2, ..., uk là các máy tính trong mạng, ei - kênh truyền tin từ máy ui đến máy ui+1. (i = 1, 2,... , k-1).

Mạng máy tính được gọi là thông suốt nếu như đối với hai máy u, v bất kỳ ta luôn có đường truyền tin từ u đến v và đường truyền tin từ v đến u. Mạng máy tính được gọi là hầu như thông suốt nếu đối với hai máy u, v bất kỳ, hoặc là có đường truyền từ u đến v, hoặc là có đường truyền từ v đến u.

Biết rằng mạng máy tính đã cho là hầu như thông suốt nhưng không thông suốt.

Yêu cầu: hãy xác định xem có thể bổ sung đúng một kênh truyền tin để biến mạng đã cho trở thành thông suốt được không?

#### Dữ liệu

+ Dòng đầu tiên ghi 2 số nguyên n và m.
+ Dòng thứ i trong số m dòng tiếp theo mô tả kênh nối thứ i bao gồm 2 số nguyên dương ui và vi cho biết kênh nối thứ i cho phép truyền tin từ máy ui đến máy vi, i=1,2,...,m.

Các số trên cùng một dòng được ghi cách nhau bởi dấu cách.

#### Kết qủa

+ Dòng đầu tiên ghi 'YES' nếu câu trả lời là khẳng định, ghi 'NO' nếu câu trả lời là phủ định.
+ Nếu câu trả lời là khẳng định thì dòng thứ hai ghi hai số nguyên dương u, v cách nhau bởi dấu cách cho biết cần bổ sung kênh truyền tin từ máy u đến máy v để biến mạng thành thông suốt.

#### Hạn chế

Trong tất cả các test, n ≤ 2000, m ≤ 30000.

#### Ví dụ

```
**Dữ liệu:**
3 2
1 2
2 3

**Kết qủa**
YES
3 1

```

<!--more-->

