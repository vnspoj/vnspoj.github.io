---
layout: post
title:  "QBAGENTS - Các đại lý"
categories: [bfs, queue, dp]
code: QBAGENTS
src: QBAGENTS.cpp
---



  


Sau một số rủi ro và thất bại trong kinh doanh, tổng giám đốc công ty Fsoft là Zone quyết định tổ chức cho các sếp nhỏ của các đại lý thuộc công ty gặp mặt và thảo luận với nhau. Công ty Fsoft là một công ty cực kì lớn trải khắp toàn cầu nên một vấn đề lớn đặt ra là làm sao tổ chức cho 2 sếp nhỏ gặp nhau trong thời gian sớm nhất. Vấn đề đặc biệt trở nên hóc búa vì các nhân viên của công ty chỉ được đi bằng mạng giao thông của công ty để đảm bảo an toàn, bảo mật và chi phí. Nhưng mạng này lại hơi tệ:

\- Các nhân viên buộc phải di chuyển theo các tuyến giao thông giữa các đại lý.

\- Mạng giao thông của công ty là mạng gồm các tuyến đường 1 chiều.

\- Các nhân viên khi đi trong mạng thì mỗi giờ đi được theo đúng 1 tuyến đường và phải liên tục di chuyển (nghĩa là không được dừng lại).

Được cái đây là mạng nội bộ và với công nghệ đỉnh cao nên không có chuyện tắc đường. Vì vậy, trong 1 giờ luôn có thể di chuyển từ đại lý này sang đại lý khác nếu có đường.

Zone muốn nhân viên của mình không lãng phí thời gian. Bởi vậy ông muốn tính thời gian ngắn nhất mà 2 sếp ở 2 đại lý cho trước có thể gặp nhau. Đáng tiếc là Zone chỉ giỏi kinh doanh, còn lập trình thì quá yếu kém. Bạn là nhân viên dưới quyền Zone và đang rất muốn thể hiện khả năng của mình. Vậy thì, hãy nhân cơ hội này để cho Zone thấy trình độ tuyệt vời của bạn.

#### Input

Dòng đầu ghi 2 số N, M là số đại lý và số tuyến đường trong mạng giao thông của công ty Fsoft. (N ≤ 250)

Dòng thứ 2 ghi S,T lần lượt là số thứ tự 2 đại lý có 2 sếp cần phải gặp nhau.

M dòng tiếp theo mỗi dòng ghi 2 số nguyên U, V thể hiện có đường đi một chiều từ U tới V.

#### Output

Gồm một dòng duy nhất ghi thời gian nhỏ nhất 2 sếp có thể gặp nhau.

Nếu 2 sếp không thể gặp nhau ghi -1.

#### Example

```
**Input:**
6 7
1 5
1 2
4 5
2 3
3 4
4 1
5 4
5 6

**Output:**
3

```

<!--more-->

