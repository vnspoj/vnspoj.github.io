---
layout: post
title:  "BWPOINTS - VOI 2011 Nối điểm đen trắng"
categories: [greedy, sortings]
code: BWPOINTS
src: BWPOINTS.cpp
---


Trên trục số thực cho n điểm đen và n điểm trắng hoàn toàn phân biệt. Các điểm đen có tọa độ nguyên a1, a2, …, an còn các điểm trắng có tọa độ nguyên b1, b2, …, bn. Người ta muốn chọn ra k điểm đen và k điểm trắng để nối mỗi một điểm đen với một điểm trắng sao cho k đoạn thẳng tạo được đôi một không có điểm chung.

**Yêu cầu:** Cho tọa độ của n điểm đen a1, a2, …, an và tọa độ của điểm trắng b1, b2, …, bn. Hãy tìm giá trị k lớn nhất thỏa mãn yêu cầu trên.

**Dữ liệu:**

*   Dòng thứ nhất chứa số nguyên dương n (n <= 10^5).  
*   Dòng thứ hai chứa các số a1, a2, …, an (|ai| <= 10^9, i = 1, 2,…, n)
*   Dòng thứ ba chứa các số b1, b2, …, bn (|bi| <= 10^9, i = 1, 2,…, n)

      Các số trên cùng một dòng được ghi cách nhau ít nhất một dấu cách.

**Kết quả:** Ghi ra một số nguyên duy nhất là số k lớn nhất tìm được

**Ví dụ:**

Dữ liệu

```
3
0 3 1
-3 5 -1
```

Kết quả

```
2
```

![](https://vn.spoj.com/content/voj:BWPOINTS.png)


**Ràng buộc:** 50% số test ứng với 50% số điểm của bài có 1 <= n <= 100

<!--more-->



Trộn hai màu lại thành một danh sách trên trục tọa độ và sort lại. Sau đó nhận thấy ta chỉ cần chọn các cặp điểm kề nhau khác màu trên trục này thì sẽ được nhiều cặp điểm nhất không giao nhau (tham lam).


Ở đây tôi tạo biến Now lưu màu hiện tại khi duyệt, Now = -1 nếu như nút
này đã dùng rồi.
