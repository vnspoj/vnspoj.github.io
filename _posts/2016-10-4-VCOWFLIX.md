---
layout: post
title:  "VCOWFLIX - Đi xem phim"
categories: [dp]
code: VCOWFLIX
src: VCOWFLIX.cpp
codeforces: https://codeforces.com/group/FLVn1Sc504/contest/274854/problem/X
---

Nông dân John đang đưa các con bò của anh ta đi xem phim! Xe tải của anh ta thì có sức chứa có hạn thôi, là `C` (`100 <= C <= 5000`) kg, anh ta muốn đưa 1 số con bò đi xem phim sao cho **tổng khối lượng** của đống bò này là **lớn nhất**, đồng thời xe tải của anh ta vẫn chịu được.

Cho `N` (`1 <= N <= 16`) con bò và khối lượng `Wi` của từng con, hãy cho biết khối lượng bò lớn nhất mà John có thể đưa đi xem phim là bao nhiêu.

#### Dữ liệu

*   Dòng 1: 2 số nguyên cách nhau bởi dấu cách: `C` và `N`
*   Dòng `2..N+1`: Dòng `i+1` chứa `1` số nguyên: `Wi`

#### Kết quả

*   Dòng 1: Một số nguyên là tổng khối lượng bò lớn nhất mà John có thể mang đi xem phim.

#### Ví dụ

```
Input
259 5
81
58
42
33
61

Output
242
```

**Giải thích**

`81+58+42+61 = 242` - đây là tổng khối lượng bò lớn nhất có thể được.

<!--more-->



Đây là bài toán cơ sở cho bài toán cái túi huyền thoại. Thay vì giá trị lớn nhất, bây giờ chỉ yêu cầu khối lượng lớn nhất.

Do đó, gọi `F[i][j]` là 1 nếu có cách chọn bò để khối lượng trên xe là `j` với những con bò trong `i` con bò đầu tiên. Có hai cách hình thành `F[i][j]`, thứ nhất không chọn `i` thì `F[i][j] = F[i-1][j]`, nếu có chọn `i` thì `F[i][j] = F[i-1][j-w[i]]`. Vậy xét cả hai trường hợp để kiểm tra `F[i][j]`. 

Bài toán đến đây chưa kết thúc, vấn đề phát sinh khi làm kiểu này là bị **40-WA-test-0**. Do đó muốn full test bài này phải tối ưu không gian bộ nhớ. 

Nhận thấy `F[i][]` chỉ tính thông qua `F[i-1]`, nên ta tối ưu toàn bộ mảng `F[][]` thành `F[]`. Và chú ý khi for vòng `for` (khối lượng) thì for ngược từ `c -> 0`, vì nêu `for` xuôi thì những giá trị lớn hơn bị ảnh hưởng bởi những giá trị nhỏ đã lỡ cập nhật.
