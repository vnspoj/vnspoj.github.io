---
layout: post
title:  "PIZZALOC - Pizza Location"
categories: [math, sortings, brute-force, graph]
code: PIZZALOC
src: PIZZALOC.cpp
---



  






Picko muốn mở một số cửa hàng pizza tại 1 số địa điểm. Bánh pizza sẽ cung cấp cho mọi khách hàng nằm trong hình tròn bán kính R với tâm là các địa điểm được chọn.

Xác định số khách hàng lớn nhất có thể phục vụ.

#### Input

Dòng đầu là hai số K, R : số nhà hàng có thể được mở và bán kính phục vụ của mỗi nhà hàng,1 ≤ K ≤ 10, 1 ≤ R ≤ 500.

Dòng thứ hai là M, số địa điểm có thể đặt nhà hàng, K ≤ M ≤ 20.

M dòng tiếp theo, mỗi dòng là 2 số nguyên X và Y, -1000 ≤ X,Y ≤ 1000.

Dòng tiếp theo là N, số khu nhà, 1 ≤ N ≤ 100.

Mỗi dòng trong N dòng tiếp theo là 3 số nguyên X, Y , S, là tọa độ và số người ở khu nhà đó, -1000 ≤ X,Y ≤ 1000, 1 ≤ S ≤ 100.

Khu nhà nằm trong bán kính của nhà hàng nếu khoảng cách giữa chúng <= R. Không có 2 khu nhà tại cùng 1 địa điểm.

#### Output

Ghi ra số người tối đa có thể được phục vụ.

#### Sample

```
pizza.in 
 
2 2 
3 
1 0 
4 0 
7 0 
4 
0 0 1 
3 0 7 
5 0 9 
8 0 1 
 
pizza.out 
 
18 

pizza.in 
 
2 2 
3 
-2 0 
0 1 
3 0 
8 
-3 1 1 
-3 0 1 
-3 -1 1 
-2 -1 1 
0 0 3 
0 2 1 
2 1 3 
4 0 2 
 
pizza.out 
 
12 

pizza.in 
 
3 3 
5 
0 0 
1 6 
2 3 
6 6 
7 2 
8 
0 1 2 
0 5 3 
0 6 1 
1 0 1 
3 2 3 
3 6 2 
6 2 4 
8 6 3 
 
pizza.out 
 
17 

```

<!--more-->




Nhận xét rằng `20 C 10` chỉ khoảng 200000, do đó đủ để ta duyệt tất cả các tổ hợp chập k của m. 

Với mỗi tổ hợp thì chỉ đơn giản là tính số người rồi tìm max trong tất cả các trường hợp. Tuy nhiên nhìn chung thì có vẻ ĐPT hơi nặng, nên ta có thể đặt một số cận hoặc trick trong đó để giảm ĐPT xuống tránh TLE, (chẳng hạn một số tối ưu như : nếu tìm được lượng lớnnhất rồi thì dừng, hay là ưu tiên những nhà hàng phủ nhiều người nhất xét trước (sort lại), cũng có thể tính luôn số người trong lúc duyệt, hoặc cũng có thể tạo danh sách kề các nhà nằm trong vùng của nhà hàng...).
