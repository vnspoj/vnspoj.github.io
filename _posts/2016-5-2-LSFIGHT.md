---
layout: post
title:  "LSFIGHT - Đấu trường VM08"
categories: [dp]
code: LSFIGHT
src: LSFIGHT.cpp
---





LSFIGHT/en/)



LSFIGHT/vn/)

Trong kỳ thi Marathon 08 năm nay các vCoders phải tham gia một môn thi đấu đối kháng giữa 2 người. Sau vòng loại, ban tổ chức sẽ chọn ra N thí sinh có số điểm cao nhất và đánh số từ 1 đến N. Các thí sinh này phải xếp lần lượt theo thứ tự thành 1 vòng tròn (người thứ N đứng cạnh người thứ 1). Sau đó sẽ chọn ra 2 thí sinh bất kì đang đứng cạnh nhau trong vòng tròn để thi đấu, thí sinh nào thua sẽ bị loại và buộc phải đi ra vòng tròn, trở về hàng ghế khán giả. Cuộc đấu cứ tiếp tục như thế đến khi chỉ còn một người ở lại và cũng chính là người thắng cuộc.

Tuy nhiên ban tổ chức muốn biết trước xem có bao nhiêu người có khả năng thắng cuộc và đó là những người nào. Biết trước ai sẽ thắng trong mỗi trận đấu, bạn hãy giúp ban tổ chức nhé ^^

#### Dữ liệu

\- Dòng đầu là số nguyên dương N (3 <= N <= 500)  
\- N dòng sau là ma trận A\[i, j\], A\[i, j\] = 0 nếu thí sinh i thua thí sinh j và A\[i, j\] = 1 nếu ngược lại. Biết rằng luôn đảm bảo A\[i, i\]=1 với mọi i và A\[i, j\] + A\[j, i\] = 1 với i <> j. Các số viết cách nhau ít nhất 1 dấu cách.

#### Kết quả

\- Dòng đầu là số nguyên dương M - số lượng thí sinh có khả năng thắng cuộc  
\- M dòng sau mỗi dòng ghi một số là chỉ số của thí sinh có khả năng thắng cuộc theo thứ tự tăng dần của chỉ số.

#### Ví dụ

```
Input
7
1 1 1 1 1 0 1
0 1 0 1 1 0 0
0 1 1 1 1 1 1
0 0 0 1 1 0 1
0 0 0 0 1 0 1
1 1 0 1 1 1 1
0 1 0 0 0 0 1

Output
3
1
3
6

```

<!--more-->



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
