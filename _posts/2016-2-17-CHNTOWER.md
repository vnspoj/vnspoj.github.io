---
layout: post
title:  "CHNTOWER - "
categories: []
code: CHNTOWER
src: CHNTOWER.cpp
---



  


Bài toán Tháp Hà Nội trở thành nổi tiếng vào năm 1883, sau bài báo của Luca là một nhà toán học người Pháp. Tháp là mỗi cọc đĩa đường kính giảm dần từ dưới lên trên . Bài toán đặt ra là cần chuyển chồng đĩa sang một cọc khác sử dụng một cọc trung gian sao cho trong quá trình chuyển đĩa không có đĩa nào có đường kính lớn hơn bị đặt lên trên đĩa có đường kính nhỏ hơn.

Yều cầu: Giải 3 toán tháp Hà Nội tổng quát. Cho M cọc và  tháp N đĩa ( 3 < M <= 64 , 1 <= N <= 64) , hãy xác định số lần chuyển đĩa tối thiểu cần thực hiện để chuyển chồng đĩa từ cọc xuất phát sang cọc đích sử dụng M-2 cọc còn lại như cọc trung gian.

#### Input

Gồm nhiều dòng, mỗi dòng chứa 2 số nguyên N,M ghi cách nhau theo thứ tự là số đĩa và số cọc trong bài toán tháp Hà Nội

#### Output

Mỗi dòng ghi số lần chuyển tối thiểu cần thực hiện

#### Example

```
Input
5 3
Output
31
```

<!--more-->

