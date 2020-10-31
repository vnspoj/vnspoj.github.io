---
layout: post
title:  "PBCWATER - Tính toán lượng nước"
categories: [heap, dp, data-structure, dijkstra]
code: PBCWATER
src: PBCWATER.cpp
---



  


        Nền phẳng của 1 công trình xây dựng được chia thành lưới ô vuông đơn vị kích thước  MxN ô. Trên mỗi ô (i,j) của lưới, người ta dựng 1 cột bê tông hình hộp có đáy là ô (i,j) và chiều cao là h\[i,j\] đơn vị. Sau khi dựng xong thì trời đổ mưa to và đủ lâu. Nhà thầu xây dựng muốn tính lượng nước đọng lại giữa các cột để có kế hoạch thi công tiếp theo. Giả thiết, nước ko thẩm thấu qua các cột bê tông cũng như ko rò rỉ qua các đường ghép giữa chúng.

        Nhiệm vụ của bạn là giúp nhà thầu tính toán lượng nước đọng lại giữa các cột.

#### Input

Dòng đầu tiên ghi 2 số nguyên dương M và N

Dòng thứ i trong M dòng tiếp theo, ghi N số nguyên dương h\[i,1\],h\[i,2\]...h\[i,N\].

#### Output

1 dòng duy nhất chứa số đơn vị khối nước đọng lại.

#### Example

```
Input  
5 5  
9 9 9 9 9  
9 2 2 2 9  
9 2 5 2 9  
9 2 2 2 9  
9 9 9 9 9  
  
Output  
60  
  
**Giới hạn:** 1<=M,N<=100,1<=H\[i,j\]<=1000  

```

<!--more-->



Gọi `F[i][j]` là mực nước mà ô `(i,j)` đạt đến, khi đó kết quả bài toán là `F[i][j] – a[i][j]`. Xét mọi đường đi từ biên đến ô `(i,j)`, hay nói các khác nước chảy từ ô `(i,j)` ra biên, khi đó ta xét mọi ô max trên mọi đường đi này, thì `F[i][j]` là min trong các ô đó, điều này không phải là dễ để chứng minh được, nhưng ta có thể dựa vào hình vẽ để nhận ra điều đó. Do đó, lợi dụng tư tưởng thuật toán dijkstra, ta xây dựng đồ thị `N*M` đỉnh và tìm `F[i][j]`.
