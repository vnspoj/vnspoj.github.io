---
layout: post
title:  "QBBUILD - Xây dựng đường"
categories: [dijkstra, graph]
code: QBBUILD
src: QBBUILD.cpp
---



  


Vua Peaceful vừa khai hoang một vùng đất để lập ra đất nước Peace, lúc đầu chỉ có N thành phố (được đánh số từ 1 đến N) và không có con đường nào.

Vua Peace chọn ra 4 thành phố đặc biệt để làm trung tâm kinh tế và 4 thành phố này phải được liên thông với nhau. Chi phí xây dựng các con đường không phải nhỏ vì thế nhà vua muốn sử dụng chi phí ít nhất để xây dựng các con đường sao cho 4 thành phố đặc biệt đó vẫn liên thông.

Bạn được biết chi phí ước tính để xây dựng một số con đường và bạn hãy chọn một số con đường để xây dựng để theo đúng ý nhà vua biết rằng luôn tồn tại ít nhất một phương án xây dựng đường sao cho 4 thành phố đặc biệt liên thông.

#### Input

Dòng đầu tiên ghi số nguyên dương N là số lượng các thành phố.( 1 ≤ N ≤ 100 )

Dòng thứ hai ghi 4 số nguyên là số hiệu của 4 thành phố đặc biệt.

Trong một số dòng tiếp theo, mỗi dòng ghi 3 số nguyên u, v và c với ý nghĩa muốn xây dựng một con đường hai chiều nối trực tiếp giữa 2 thành phố u và v thì chi phí là c. ( 1 ≤ c ≤ 5000 )

#### Output

Gồm 1 dòng duy nhất là tổng chi phí nhỏ nhất để xây dựng hệ thống đường.

#### Example

```
Input
5
2 3 4 1
1 2 10
1 5 1
5 2 1
1 4 1
4 3 3
3 2 2

Output
5

```

<!--more-->



Trước hết tính khoảng cách ngắn nhất từ u tới v với mọi u,v. 

Gọi `f[i]` là các đỉnh quan trọng, mảng `imp[u]` kiểm tra `u` có quan trọng không.

Nhận xét đầu tiên cho bài toán chính là kết quả cách nối là một cây (vì là nhỏ nhất nên không thể có chu trình). Ngoài ra trong tất cả các cách nối đường thì luôn tồn tại một đường đi là đường đi ngắn nhất giữa hai đỉnh `f[i]` và `f[j]` (`i != j`).

Từ nhận xét này, thử với mỗi cặp đỉnh `i`, `j` trong các đỉnh quan trọng, khởi tạo bằng đường đi ngắn nhất giữa 2 đỉnh này. Với đường đi này (1 cây), lần lượt nạp các đỉnh còn lại trong `f` vào cây tạo thành cây khung nhỏ nhất chứa các đỉnh `f`.
