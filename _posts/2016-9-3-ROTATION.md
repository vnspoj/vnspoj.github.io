---
layout: post
title:  "ROTATION - Quay bánh xe"
categories: [math]
code: ROTATION
src: ROTATION.cpp
---


Nông dân John có một cái máy gặt đập cũ, máy này yêu cầu một số dây curoa được đặt trên các bánh xe khác nhau để quay các bộ phận. Động cơ sẽ làm quay bánh xe 1 theo chiều kim đồng hồ, bánh xe 1 lại được gắn kèm 1 dây curoa với bánh xe 2. Bánh xe 2 lại được gắn kèm 1 dây curoa với bánh xe 3 , v.v.. và cứ như vậy có tổng cộng N (1 <= N <= 1,000) bánh xe (và N-1 dây curoa).

![](https://vn.spoj.com/SPOJVN/content/rotation1.jpg)

Hình ở trên minh họa 2 cách đặt dây curoa giữa 2 bánh xe. Trong hình minh họa, dây curoa của bánh xe 1 đã trực tiếp làm bánh xe 2 chuyển động và quay cùng chiều với bánh xe 1 (gọi là dây curoa thẳng - straight belt). Bánh xe 3 quay kéo theo bánh xe 4 cũng quay nhờ vào dây curoa chéo (crossed belt) khiến cho bánh xe 4 chuyển động ngược chiều so với bánh xe 3 => Đảo ngược chiều chuyển động.

Cho danh sách các dạng của curoa nối các bánh xe với nhau. Biết rằng bánh xe 1 được động cơ quay theo chiều kim đồng hồ. Hãy xác định chiều quay của bánh xe N. Mỗi dây curoa được mô tả bởi 3 số nguyên:

*   S\_i -- bánh xe tác động (nguồn)
*   D\_i -- bánh xe bị tác động (đích)
*   C\_i -- dạng của dây curoa (0=dây thẳng, 1=dây chéo)

Thật không may, FJ lại đưa ra danh sách các dây curoa theo 1 thứ tự ngẫu nhiên.

Dưới đây là 1 ví dụ với N=4, bánh xe 1 quay theo chiều kim đồng hồ.

![](https://vn.spoj.com/content/rotation2.jpg)

Dây curoa thẳng được nối tới bánh xe 2 và 3 bởi vậy mà chúng cũng chuyển động cùng chiều kim đồng hồ. Còn lại dây curoa chéo đảo ngược chuyển động vì vậy bánh xe 4 (bánh xe N) chuyển động ngược chiều kim đồng hồ.

#### DỮ LIỆU

*   Dòng 1: Một số nguyên duy nhất: N
*   Dòng 2..N: Mỗi dòng mô tả 1 dây curoa với 3 số nguyên: S\_i, D\_i, và C\_i

#### KẾT QUẢ

*   Dòng 1: Một số nguyên duy nhất là chiều quay của bánh xe N. (0=cùng chiều kim đồng hồ, 1=ngược chiều kim đồng hồ)

#### VÍ DỤ

```
**Dữ liệu**
4
2 3 0
3 4 1
1 2 0

**Kết quả**
1

```

<!--more-->

