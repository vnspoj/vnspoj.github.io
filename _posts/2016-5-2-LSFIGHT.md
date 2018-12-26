---
layout: post
title:  "LSFIGHT - Đấu trường VM08"
categories: [dp]
code: LSFIGHT
src: LSFIGHT.cpp
---

Gọi F[i][j] = 1 nếu như có cách để i và j loại bỏ toàn bộ các đối thủ giữa i và j theo chiều kim đồng hồ. F[i][j] = 0 trong trường hợp ngược lại. Khởi tạo F[i][next(i)] = 1 (next(i) là người kế tiếp của i trên vòng tròn). Công thức QHĐ : F[i][j] = 1 nếu tồn tại k giữa i và j theo chiều kim đồng hồ sao cho F[i][k] = 1 và F[k][j] = 1 và (a[i][k] || a[k][j]) (dễ hiểu).  Bây giờ làm sao tính được F[][] với công thức này.

Nhận thấy i và j chỉ hình thành khi hình thành tất cả các đoạn con trong i và j. (vì nếu duyệt N^3 thông thường chưa chắc tính được F[i][j]). Do đó ta thay vì duyệt người bắt đầu, ta duyệt theo khoảng cách tăng dần. Ban đầu khởi tạo F[i][next(i)] = 1 tức là khoảng cách bằng 1.

Tối đa khoảng cách là n-1, nên 

Duyệt kc =  2 -> n-1 : (biến khoảng cách giữa hai người)
	Duyệt i = 1 -> n  : (người bắt đầu) :
		Tìm j : người kết thúc (cách I khoảng kc theo chiều kim đh)
			j = next(i, kc) (next(i, kc) là hàm tính trong O(1))

Duyệt kc-1 người giữa i và j bằng một biến k ban đầu gán bằng i, mỗi lần duyệt k = next(k, 1).

Do đó có thể tính F[][] trong O(N^3)

Bây giờ kiểm tra một người có thể thắng hay không : Người i có thể thắng nếu tồn tại người j sao cho F[i][j] && F[j][i] && a[i][j]
