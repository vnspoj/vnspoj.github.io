---
layout: post
title:  "NKSGAME - VOI08 Trò chơi với dãy số"
categories: [binary-search]
code: NKSGAME
src: NKSGAME.cpp
---



Hai bạn học sinh trong lúc nhàn rỗi nghĩ ra trò chơi sau đây. Mỗi bạn chọn trước một dãy số gồm n số nguyên. Giả sử dãy số mà bạn thứ nhất chọn là:

_b1, b2, ..., bn_

còn dãy số mà bạn thứ hai chọn là

_c1, c2, ..., cn_

Mỗi lượt chơi mỗi bạn đưa ra một số hạng trong dãy số của mình. Nếu bạn thứ nhất đưa ra số hạng bi (1 ≤ i ≤ n), còn bạn thứ hai đưa ra số hạng cj (1 ≤ j ≤ n) thì giá của lượt chơi đó sẽ là |bi+cj|.

Ví dụ: Giả sử dãy số bạn thứ nhất chọn là 1, -2; còn dãy số mà bạn thứ hai chọn là 2, 3. Khi đó các khả năng có thể của một lượt chơi là (1, 2), (1, 3), (-2, 2), (-2, 3). Như vậy, giá nhỏ nhất của một lượt chơi trong số các lượt chơi có thể là 0 tương ứng với giá của lượt chơi (-2, 2).

#### Yêu cầu

Hãy xác định giá nhỏ nhất của một lượt chơi trong số các lượt chơi có thể.

#### Dữ liệu

+ Dòng đầu tiên chứa số nguyên dương n (n ≤ 10^5)
+ Dòng thứ hai chứa dãy số nguyên b1, b2, ..., bn (|bi| ≤ 10^9, i=1, 2, ..., n)
+ Dòng thứ hai chứa dãy số nguyên c1, c2, ..., cn (|ci| ≤ 10^9, i=1, 2, ..., n)

Hai số liên tiếp trên một dòng được ghi cách nhau bởi dấu cách.

#### Kết quả

Ghi ra giá nhỏ nhất tìm được.

#### Ràng buộc

+ 60% số tests ứng với 60% số điểm của bài có 1 ≤ n ≤ 1000.

#### Ví dụ

```
**Dữ liệu:**
2
1 -2
2 3

**Kết qủa**
0

```

<!--more-->



Cần tìm hai chỉ số i, j từ 2 mảng a[] và b[] sao cho |a[i]+b[j]| min. N <= 1e5, do đó ta có thể sắp xếp mảng a[], sau đó duyệt từng phần tử j của mảng b[], chặt nhị phân trên mảng a[] đã được sort để tìm phần tử i gần với giá trị -b[j] nhất.

Có thể sử dụng hàm lower_bound() trong C++. 
