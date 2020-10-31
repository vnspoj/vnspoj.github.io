---
layout: post
title:  "BARICAVN - BARICA"
categories: [dp, sortings]
code: BARICAVN
src: BARICAVN.cpp
---


Barica là một con cóc không bình thường. Barica sống trong một cái ao, nơi có N lá sen bềnh bồng trên mặt nước. Những lá sen được đánh số từ 1 đến N. Nhìn từ trên xuống, mỗi lá sen đc xem như một điểm trên hệ trục tọa độ Oxy. Barica có thể nhảy từ lá sen có tọa độ (x1;y1) đến tọa độ (x2,y2) nếu:  
  
\_ x2 > x1 và y1 = y2 hoặc  
\_ y2 > y1 và x1 = x2  
  
Với mỗi lá sen, chúng ta biết được số lượng ruồi gần đó. Barica có thể dùng lưỡi tóm gọn tất cả những con ruồi gần lá sen mà nó đang đứng.  
  
Barica thu được một đơn vị năng lượng với mỗi con ruồi mà nó bắt được và mất K đơn vị năng lượng cho mỗi bước nhảy từ lá sen này sang lá sen khác. Barica không thể thực hiện cú nhảy nếu năng lượng hiện tại của nó nhỏ hơn K.  
  
Barica muốn đi từ lá sen 1 đến lá sen N và tích trữ được nhiều năng lượng nhất có thể khi đang ở lá sen N. Năng lượng của Barica ban đầu bằng 0 và dĩ nhiên nó phải lấy năng lượng từ lá sen 1 để thực hiện cú nhảy.  
Hãy tìm năng lượng lớn nhất mà Barica có thể có được tại lá sen N.

#### Input

\_ Dòng đầu là số N và K (N<=300 000; K<=1000) cách nhau bởi khoảng trắng  
\_ N dòng sau mỗi dòng chứa 3 số x\_i, y\_i, F\_i với x\_i và y\_i là tọa độ lá sen thứ i và F\_i là số ruồi ở lá sen i. (0 <= x\_i, y\_i <= 100 000; 0 <= F\_i <=1000)  
Lưu ý: không có hai lá sen nào trùng tọa độ và luôn tồn tại ít nhất một đường đi từ 1 tới N.

#### Output

\_ Một dòng duy nhất là năng lượng cao nhất mà Barica có thể có được khi kết thúc ở lá sen thứ N.

#### Example

```
**Input:**
6 5
1 1 5
2 1 5
1 2 4
2 3 5
3 2 30
3 3 5

**Output:**
5
```

<!--more-->


