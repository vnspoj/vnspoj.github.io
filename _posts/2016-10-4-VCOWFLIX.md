---
layout: post
title:  "VCOWFLIX - Đi xem phim"
categories: [dp]
code: VCOWFLIX
src: VCOWFLIX.cpp
---

Đây là bài toán cơ sở cho bài toán cái túi (huyền thoại ☺). Thay vì giá trị lớn nhất (bò là tiền mà), bây giờ chỉ yêu cầu khối lượng lớn nhất (thích nặng chứ ko thích nhiều, chả hiểu thằng ra đề ☹).

Do đó, gọi `F[i][j]` là 1 nếu có cách chọn bò để khối lượng trên xe là j với những con bò trong i con bò đầu tiên. Có hai cách hình thành `F[i][j]`, thứ nhất không chọn i thì `F[i][j] = F[i-1][j]`, nếu có chọn i thì `F[i][j] = F[i-1][j-w[i]]`. Vậy xét cả hai trường hợp để kiểm tra F[i][j]. 

Bài toán đến đây chưa kết thúc, vấn đề phát sinh khi làm kiểu này là bị 40-WA-test-0. Do đó muốn full test bài này phải tối ưu không gian bộ nhớ. 

Nhận thấy F[i][] chỉ tính thông qua F[i-1], nên ta tối ưu toàn bộ mảng F[][] thành F[]. Và chú ý khi for vòng for (khối lượng) thì for ngược từ c -> 0, vì nêu for xuôi thì những giá trị lớn hơn bị ảnh hưởng bởi những giá trị nhỏ đã lỡ cập nhật.
