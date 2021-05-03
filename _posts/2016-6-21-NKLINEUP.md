---
layout: post
title:  "NKLINEUP - Xếp hàng"
categories: [segment-tree, rmq, data-structure]
code: NKLINEUP
src: NKLINEUP.cpp
codeforces: https://codeforces.com/group/FLVn1Sc504/contest/274824/problem/M
---



  


Hàng ngày khi lấy sữa, N con bò của bác John (1 ≤ N ≤ 50000) luôn xếp hàng theo thứ tự không đổi. Một hôm bác John quyết định tổ chức một trò chơi cho một số con bò. Để đơn giản, bác John sẽ chọn ra một đoạn liên tiếp các con bò để tham dự trò chơi. Tuy nhiên để trò chơi diễn ra vui vẻ, các con bò phải không quá chênh lệch về chiều cao.

Bác John đã chuẩn bị một danh sách gồm Q (1 ≤ Q ≤ 200000) đoạn các con bò và chiều cao của chúng (trong phạm vi \[1, 1000000\]). Với mỗi đoạn, bác John muốn xác định chênh lệch chiều cao giữa con bò thấp nhất và cao nhất. Bạn hãy giúp bác John thực hiện công việc này!

#### Dữ liệu

+ Dòng đầu tiên chứa 2 số nguyên N và Q.
+ Dòng thứ i trong số N dòng sau chứa 1 số nguyên duy nhất, là độ cao của con bò thứ i.
+ Dòng thứ i trong số Q trong tiếp theo chứa 2 số nguyên A, B (1 ≤ A ≤ B ≤ N), cho biết đoạn các con bò từ A đến B.

#### Kết qủa

Gồm Q dòng, mỗi dòng chứa 1 số nguyên, là chênh lệch chiều cao giữa con bò thấp nhất và cao nhất thuộc đoạn tương ứng.

#### Ví dụ

```
**Dữ liệu:**
6 3
1
7
3
4
2
5
1 5
4 6
2 2

**Kết qủa**
6
3
0
```

<!--more-->



Bài này sử dụng segment tree, với data trên mỗi node gồm giá trị max và min trong đoạn mà node quản lý. Mỗi truy vấn, tìm ra giá trị max và min trong đoạn `[L,R]` của truy vấn đó.

Độ phức tạp: `O(NlogN + QlogN)`

Bài này cũng có thể dùng giải thuật RMQ để xử lý giá trị max, min trong đoạn, trả lời mỗi truy vấn trong `O(1)`.
