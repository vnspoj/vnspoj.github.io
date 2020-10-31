---
layout: post
title:  "CARDSHUF - "
categories: []
code: CARDSHUF
src: CARDSHUF.cpp
---







Phú ông có bộ bài gồm n lá bài. Phú ông xếp chúng thành tập và ghi vào mỗi lá bài số thứ tự ban đầu của lá bài đó trong tập bài (vị trí các lá bài được đánh số từ 1 tới n từ trên xuống dưới).  
Tiếp theo Phú ông tiến hành tráo tập bài, mỗi phép tráo kí hiệu bởi **S(i, j)**: rút ra lá bài thứ i và chèn lên trên lá bài thứ j trong số n - 1 lá bài còn lại (1 ≤ i, j ≤ n), quy ước rằng nếu j = n thì lá bài thứ i sẽ được đặt vào vị trí cuối cùng của tập bài.  
Ví dụ (**n=6**):  
![](../../../content/anhdq:cardshuf_sample.jpg)  
Sau x phép tráo bài, Phú ông đưa cho Bờm tập bài và thách Bờm dùng ít phép tráo nhất để xếp lại các lá bài về vị trí ban đầu. Hãy giúp Bờm thực hiện điều đó.

#### Dữ liệu

\- Dòng đầu tiên chứa hai số nguyên dương n, x.  
\- x dòng tiếp theo, dòng thứ p chứa hai số nguyên ip, jp cho biết phép tráo thứ p của Phú ông là **S(ip, jp)**.

#### Kết quả

\- Một số duy nhất là số phép tráo cần thực hiện để đưa các lá bài về vị trí ban đầu.

#### Ví dụ

```
**Dữ liệu:**  
6 4  
2 3  
1 2  
4 5  
1 6  
  
**Kết quả:**  
2  

```

#### Giới hạn

\- 1 ≤ n, x ≤ 10^5.

<!--more-->

