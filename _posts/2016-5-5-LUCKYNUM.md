---
layout: post
title:  "LUCKYNUM - Lucky Numbers"
categories: [bfs, dp]
code: LUCKYNUM
src: LUCKYNUM.cpp
codeforces: https://codeforces.com/group/FLVn1Sc504/contest/274501/problem/W
---



  






Trong một số nước châu Á, 8 và 6 được coi là những chữ số may mắn. Bất cứ số nguyên nào chỉ chứa chữ số 8 và 6 được coi là số may mắn, ví dụ 6, 8, 66, 668, 88, 886 …. Nguyên là một học sinh rất thích toán. Nguyên thích các số may mắn nhưng chỉ thích các số có dạng

S = 8…86…6

trong đó S có ít nhất một chữ số và chữ số 6 và 8 không nhất thiết phải đồng thời xuất hiện. Ví dụ, 8, 88, 6, 66, 86, 886, 8866 … là các số có dạng S.

Cho trước một số nguyên dương X (1 < X < 10 000), Nguyên muốn tìm số may mắn nhỏ nhất dạng S, có không quá 200 chữ số và chia hết cho X.

Nhiệm vụ của bạn là viết một chương trình tìm số đó cho Nguyên.

#### Dữ liệu vào

Dữ liệu vào gồm nhiều bộ dữ liệu tương ứng với nhiều test. Dòng đầu tiên chứa một số nguyên dương không lớn hơn 20 là số lượng các bộ dữ liệu. Các dòng tiếp theo chứa các bộ dữ liệu.

Trên mỗi dòng tiếp theo chứa một số nguyên X tương ứng với mỗi bộ dữ liệu.

#### Dữ liệu ra

Với mỗi bộ dữ liệu, ghi ra trên một dòng số may mắn dạng S nhỏ nhất chia hết cho X. Trường hợp không tồn tại số S có không quá 200 chữ số như vậy, ghi -1.

#### Ví dụ

```
**Dữ liệu vào**	
4
6
8
43
5	

**Dữ liệu ra**
6
8
86
-1

```

<!--more-->

