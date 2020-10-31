---
layout: post
title:  "PBCPOINT - Nối điểm"
categories: [bfs, dsu, dp, queue]
code: PBCPOINT
src: PBCPOINT.cpp
---



  


Trên mặt phẳng toạ độ xét các điểm có toạ độ nguyên. Có N điểm màu đỏ. bnta2 bắt đầu trò chơi như sau: với 2 điểm màu đỏ cùng dòng hay cùng cột, nối 2 điểm đó bằng 1 đoạn thẳng, các điểm có toạ độ nguyên nằm trên đoạn thẳng đó sẽ được tô đỏ. bnta2 cứ làm như vậy cho đến khi không có thêm điểm đỏ nào nữa. Tính xem có bao nhiêu điểm đỏ khi kết thúc trò chơi. Hai điểm được xem là khác nhau nếu có tọa độ khác nhau

#### Input

*   Dòng 1: chứa số nguyên dương N, N<=10^5.
*   Dòng thứ i trong N dòng tiếp theo: chứa 2 số có giá trị tuyệt đối không quá 10^3 là toạ độ của 1 điểm đỏ. (Chú ý: trong bộ test các giá trị tọa độ của các điểm được cho có thể bị trùng nhau)

#### Output

*   Gồm 1 dòng duy nhất là số điểm đỏ cuối cùng.

#### Example

```
**Input**  
4   
0 2   
3 1   
1 4   
4 4   
  
**Output**  
12
```

<!--more-->

