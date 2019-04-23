---
layout: post
title:  "NDCCARD - Các lá bài Blackjack"
categories: [dp, brute-force]
code: NDCCARD
src: NDCCARD.cpp
---


Nhận xét rằng 3*a[i] <= 30000 < 500000 nên M cho là quá lớn so với thực tế. Do đó ta có thể vét cạn trong O(N^2) vào khoảng O(10^8).

Tạo mảng F[x] là một `pair<int,int>` lưu lại chỉ số hai lá bài i, j sao cho a[i]+a[j] = x. Có thể tạo điều này trong O(N^2)

Duyệt trên mảng a, với mỗi lá bài i, ta duyệt thử các giá trị m-a[i] -> 0 xem có tồn tại hai lá bài khác tạo thành hay không. Ở đây có hai lưu ý :

m = min(m, 30000)

Khi đã tìm được thì nên dừng giải thuật.
