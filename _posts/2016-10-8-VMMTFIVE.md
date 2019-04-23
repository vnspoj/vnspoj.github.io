---
layout: post
title:  "VMMTFIVE - Tổng trên ma trận!"
categories: [brute-force]
code: VMMTFIVE
src: VMMTFIVE.cpp
---

Ta đệ quy theo từng vị trí trên bảng từ ô 1,1 đến ô 5,5. Bắt đầu từ 

1,1 -> 1,2 -> 1,3 -> 1,4 -> 1,5 -> 2,1 -> 2,2 ->... -> 5,5 -> 6,1.


Với mỗi bước đệ quy ta đặt cận để loại bỏ các trường hợp không khả thi.

Tạo hai biến l, r tương ứng là giá trị biên trái và phải của ô a[i][j] hiện tại khả thi. 

Hai biến này có thể tính như sau : Gọi d[i] và c[j] là tổng hàng i, cột j ở thời điểm hiện tại và x là giá trị ô a[i][j]. ta có :

(5-j).1 <= d[i] – x <= (5-j).25 (tổng của 5-j ô còn lại trên hàng i)

(5-i).1 <= c[j] – x <= (5-i).25 (tổng của 5-i ô còn lại trên cột j)

=> max(1, d[i]-25*(5-j), c[j]-25*(5-i)) <= x && x <= min(25, d[i]-5+j, c[j]-5+i))

=> l = max(1, d[i]-25*(5-j), c[j]-25*(5-i)) r = min(25, d[i]-5+j, c[j]-5+i))

=> nếu l > 25 || r < 1 || l > r thì không khả thi. (một cận cho bài toán)

Còn một cận khác nữa là : nếu ta đang xét ô (i,5) thì bắt buộc a[i][5] = d[i] hiện tại để tổng cả hàng này thỏa đề. Do đó gán l = r = d[i].

Sau mỗi bước thử giá trị a[i][j] thì ta quay lui giá trị d[i] va c[j].