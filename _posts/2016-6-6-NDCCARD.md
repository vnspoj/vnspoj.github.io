---
layout: post
title:  "NDCCARD - Các lá bài Blackjack"
categories: [dp, brute-force]
code: NDCCARD
src: NDCCARD.cpp
codeforces: https://codeforces.com/group/FLVn1Sc504/contest/274823/problem/B
---



  



Blackjack là trò chơi đánh bài khá phổ biến, mục tiêu là có được những lá bài mà tổng của nó là lớn nhất nhưng không vượt quá 21. Lấy ý tưởng từ trò chơi này các bạn [khaihanhdk](http://vnoi.info/index.php?option=com_voj2&page=user&user=khaihanhdk) [huytion156](http://vnoi.info/index.php?option=com_voj2&page=user&user=huytion156) [thanhdat01234](http://vnoi.info/index.php?option=com_voj2&page=user&user=thanhdat01234) đã sáng tạo ra một phiên bản mới của trò chơi cho riêng mình.

Trong phiên bản trò chơi mới này các bạn đã viết lên mỗi lá bài một số nguyên dương. Người tham gia trò chơi được cung cấp một tập gồm N lá bài và một số nguyên dương M. Nhiệm vụ của người chơi là phải chọn ra 3 lá bài từ tập lá bài đã cho sao cho tổng các số trên 3 lá bài đã chọn là lớn nhất và không vượt quá M.

#### Yêu cầu:  Bạn hãy tìm kết quả tốt nhất có thể có của trò chơi trên.

#### Dữ liệu:

+ Dòng đầu ghi số nguyên dương N,M (N<=10000 , M<=500000).
+ N dòng sau ghi N số nguyên dương đôi một khác nhau là các số được ghi trên N lá bài ( 1 ≤ a\[i\] ≤ 10000).

#### Kết quả:

Ghi trên một dòng duy nhất là kết quả bài toán. Test luôn đảm bảo có kết quả.

#### Ví dụ:

**Dữ liệu:**

6 20 7 9 6 2 1 5

**Kết quả:** 20

\=> Giải thích: Chọn các lá bài mang số 9 , 6 , 5 ta có 9+6+5 = 20 <= M

<!--more-->




Nhận xét rằng 3*a[i] <= 30000 < 500000 nên M cho là quá lớn so với thực tế. Do đó ta có thể vét cạn trong O(N^2) vào khoảng O(10^8).

Tạo mảng F[x] là một `pair<int,int>` lưu lại chỉ số hai lá bài i, j sao cho a[i]+a[j] = x. Có thể tạo điều này trong O(N^2)

Duyệt trên mảng a, với mỗi lá bài i, ta duyệt thử các giá trị m-a[i] -> 0 xem có tồn tại hai lá bài khác tạo thành hay không. Ở đây có hai lưu ý :

m = min(m, 30000)

Khi đã tìm được thì nên dừng giải thuật.
